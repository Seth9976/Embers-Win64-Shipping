// 函数: sub_142839130
// 地址: 0x142839130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_38 = zmm6
int32_t rcx = *(arg1 + 0xd90)
int32_t r13 = 0

if (rcx s> 0)
    void* rbx_1 = arg1 + 0x792
    int32_t rax_2
    
    do
        if (zx.d(*(rbx_1 - 1)) == arg3)
            if ((*rbx_1 & 0x10) == 0)
                if (arg2 == 0)
                    goto label_1428391c2
                
                goto label_14283918b
            
            if (arg2 != 0)
                goto label_1428391c2
            
            goto label_14283918b
        
    label_14283918b:
        uint32_t rdx = zx.d(*(rbx_1 + 1))
        
        if (rdx != arg3 || (*(rbx_1 + 2) & 0x10) == 0 || arg2 == 0)
            rax_2 = rcx
            
            if (rdx == arg3 && (*(rbx_1 + 2) & 0x10) == 0 && arg2 == 0)
                goto label_1428391c2
        else
        label_1428391c2:
            int32_t i = 0
            int64_t r15_1 = sx.q(sub_140a77ee0(rbx_1 - 2))
            zmm6 = zx.o(0)
            
            if (*(arg1 + 0xd90) s> 0)
                void* rbp_1 = arg1 + 0x790
                
                do
                    if (zx.d(*rbp_1) == r15_1.d)
                        int64_t i_1 = sx.q(i)
                        int64_t zmm0
                        zmm0, zmm6 = sub_142837e50(arg1 + ((i_1 + ((i_1 + 0x79) << 1)) << 3), 
                            *(arg1 + 8), arg1)
                        zmm6.d = zmm6.d f+ zmm0.d
                    
                    i += 1
                    rbp_1 += 0x18
                while (i s< *(arg1 + 0xd90))
            
            *(((r15_1 + 1) << 5) + arg1) = fconvert.d(zmm6.d)
            sub_14283970c(arg1, r15_1.d)
            rax_2 = *(arg1 + 0xd90)
        
        r13 += 1
        rbx_1 += 0x18
        rcx = rax_2
    while (r13 s< rax_2)

return 0
