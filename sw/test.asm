.global entry

.data                 /* data section*/
        .word 0x0001
        .word 0xFFFF   /* result goes here */
.text                /* code goes to text section*/
.ent entry
	j entry
	nop
	nop
	nop
	nop
	nop
	nop
	lw $t1, 0x78
	sw $t1, 0x70
	rfe


entry:
	lw $t0, 0x200
loop:
        add $t0, $t0, 0x1    /* t0 = t0 + 0xB  == 0xC*/
        add $t0, $t0, 0x1
	add $t0, $t0, 0x1
	add $t0, $t0, 0x1
	add $t0, $t0, 0x1
	j loop
.end entry
