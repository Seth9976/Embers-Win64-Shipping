// 函数: sub_140857950
// 地址: 0x140857950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
sub_140835420(&arg1[0x60])
sub_14083bc90(&arg1[0x60], 1)
sub_140835420(&arg1[0x15])
uint64_t rbx = arg1[4]
int64_t r13 = 0
int128_t var_48

if (rbx != 0)
    void* rax_1 = sub_140cddea0()
    void* rdx_1 = *(rbx + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30
            && (arg1[1].b & 3) != 0)
        var_48.q = 0
        void* r8_1
        r8_1.b = 1
        var_48:8.q = 0
        sub_140d3ccc0(rbx, &var_48, r8_1.b, 0, 0)
        int64_t* rdi_1 = var_48.q
        void* rbp_1 = &rdi_1[sx.q(var_48:8.d)]
        
        if (rdi_1 != rbp_1)
            do
                int64_t* rbx_1 = *rdi_1
                
                if (rbx_1 != 0)
                    void* rax_5 = sub_140876da0()
                    void* rdx_3 = rbx_1[2]
                    int64_t rax_6 = sx.q(*(rax_5 + 0x38))
                    
                    if (rax_6.d s<= *(rdx_3 + 0x38)
                            && *(*(rdx_3 + 0x30) + (rax_6 << 3)) == rax_5 + 0x30)
                        sub_140cd85e0(rbx_1, rdx_3)
                        rbx_1[1].d &= 0xfffffffc
                
                rdi_1 = &rdi_1[1]
            while (rdi_1 != rbp_1)
            
            rdi_1 = var_48.q
        
        if (rdi_1 != 0)
            sub_140a74f90(rdi_1)

var_48 = data_14396e7c0

if (sub_140cdd5d0(arg1, &var_48) s< 0x38)
    int32_t i = 0
    
    if (arg1[0xa].d s> 0)
        int32_t rdi_2 = 1
        
        do
            int64_t rbx_2 = sx.q(arg1[0xc].d)
            int32_t* r14_2 = arg1[9] + r13
            int32_t rax_9 = (rbx_2 + 1).d
            arg1[0xc].d = rax_9
            
            if (rax_9 s> *(arg1 + 0x64))
                sub_1407c3b60(&arg1[0xb])
            
            int32_t* r15_2 = rbx_2 * 0x38 + arg1[0xb]
            sub_1407e3510(r15_2)
            sub_1408480e0(r15_2, r14_2)
            int32_t rdx_7 = rdi_2
            r15_2[0xc] ^= (r15_2[0xc] ^ r14_2[0xc]) & 1
            int32_t rcx_15 = ((r15_2[0xc] ^ r14_2[0xc]) & 2) ^ r15_2[0xc]
            r15_2[0xc] = rcx_15
            r15_2[0xc] = ((rcx_15 ^ r14_2[0xc]) & 4) ^ rcx_15
            
            if (i == 0xffffffff)
                rdx_7 = -1
            
            int32_t* rax_17 = sub_14081a540(&var_48, rdx_7)
            int32_t* rdx_8 = rax_17
            *r15_2 = *rax_17
            
            if (&r15_2[2] != &rax_17[2])
                int64_t rcx_18 = *(r15_2 + 8)
                
                if (rcx_18 != 0)
                    sub_140a74f90(rcx_18)
                    rdx_8 = rax_17
                
                *(r15_2 + 8) = *(rax_17 + 8)
                *(rax_17 + 8) = 0
                r15_2[4] = rax_17[4]
                r15_2[5] = rax_17[5]
                *(rax_17 + 0x10) = 0
            
            int64_t rcx_19 = var_48:8.q
            r15_2[6] = rdx_8[6]
            r15_2[7].b = rdx_8[7].b
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            i += 1
            rdi_2 = rol.d(rdi_2, 1)
            r13 += 0x38
        while (i s< arg1[0xa].d)

arg1[6].b = sub_140856f40(arg1)
return sub_14085aab0(arg1) __tailcall
