// 函数: sub_14214b6e0
// 地址: 0x14214b6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx
rbx.b = 0
int64_t** var_28
int64_t* rax
int512_t zmm1
rax, zmm1 = sub_1423ddac0(data_143f5b298, &var_28, *(*(arg1 + 0x58) + 0x140))
int64_t** r10 = var_28
int32_t i_1
int32_t i = i_1

while (i s>= 0)
    if (i s< r10[1].d)
        rax = *r10
        
        if (rax[sx.q(i)] == 0)
            i += 1
            int32_t i_2 = i
            continue
    
    while (i s>= 0)
        if (i s>= r10[1].d)
            break
        
        if (rbx.b == *(arg2 + 0x3d4))
            rax = *r10
            void* rbx_1 = rax[sx.q(i)]
            
            if (rbx_1 == 0)
                break
            
            int64_t* rdi = *(rbx_1 + 0x30)
            
            if (rdi != 0)
                if (rdi[0x1e].b != 3)
                    void* r9_1 = *(arg1 + 0x1a30)
                    int64_t* r8_2 = *(r9_1 + 0x48)
                    int64_t* rcx_6 = r8_2
                    void* rdx_2 = &r8_2[sx.q(*(r9_1 + 0x50))]
                    int32_t rcx_7
                    
                    if (r8_2 == rdx_2)
                    label_14214b802:
                        rcx_7 = -1
                    else
                        while (*rcx_6 != arg1)
                            rcx_6 = &rcx_6[1]
                            
                            if (rcx_6 == rdx_2)
                                goto label_14214b802
                        
                        rcx_7 = ((rcx_6 - r8_2) s>> 3).d
                    
                    int32_t arg_8 = rcx_7
                    sub_1421371f0(r9_1, &arg_8, zmm1)
                else
                    sub_1420e0c80((*(*rdi + 0x150))(rdi), rdi, 0, 1)
                
                *(*(rbx_1 + 0x30) + 0x298) = 0
                *(*(rbx_1 + 0x30) + 0x418) = 0
                *(rbx_1 + 0x30) = 0
            
            *(rbx_1 + 0x38) = *(arg1 + 0x38)
            sub_141dd9000(arg2, 2)
            int64_t rax_7 = *arg2
            arg2[0x83] = arg3
            int64_t rax_8 = (*(rax_7 + 0xc10))(arg2, rbx_1)
            *(arg1 + 0x30) = arg2
            *(arg1 + 0x98) = arg2
            return rax_8
        
        do
            i += 1
            int32_t i_3 = i
            
            if (i s< 0)
                break
            
            if (i s>= r10[1].d)
                break
            
            rax = *r10
        while (rax[sx.q(i)] == 0)
        
        rbx.b += 1
    
    break

int64_t* rcx_12 = *(arg1 + 0x1a30)

if (rcx_12 == 0)
    return rax

return sub_14213f9e0(rcx_12)
