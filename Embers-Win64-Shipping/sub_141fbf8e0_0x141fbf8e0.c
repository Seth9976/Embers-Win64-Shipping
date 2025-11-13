// 函数: sub_141fbf8e0
// 地址: 0x141fbf8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg2
void* rbp_2 = &rbx[sx.q(arg2[1].d) * 4]
int32_t result

if (rbx == rbp_2)
label_141fbf9ce:
    result.b = 1
else
    while (true)
        int64_t rdx = sx.q(rbx[3].d)
        
        if (rdx.d != 0)
            if (*(arg1 + 0x750) f< rbx[2].d)
                goto label_141fbf9ce
            
            result = (rdx - 1).d
            
            if (result s>= 0 && result s< *(arg1 + 0xe18))
                *(arg3 + 0x34)
                
                if (arg3[1].d != *(arg3 + 0x34))
                    void* r9_1 = &arg3[7]
                    void* r8 = *(r9_1 + 8)
                    int64_t r10_1 = sx.q(*
                        (*(arg1 + 0xd60) + sx.q(*(*(arg1 + 0xe10) + (rdx << 2) - 4)) * 0x18 + 0x10))
                    
                    if (r8 != 0)
                        r9_1 = r8
                    
                    result = *(r9_1 + (((sx.q(arg3[9].d) - 1) & r10_1) << 2))
                    
                    if (result != 0xffffffff)
                        int64_t r8_1 = *arg3
                        
                        while (true)
                            int64_t rdx_2 = sx.q(result) * 3
                            
                            if (*(r8_1 + (rdx_2 << 2)) == r10_1.d)
                                break
                            
                            result = *(r8_1 + (rdx_2 << 2) + 4)
                            
                            if (result == 0xffffffff)
                                goto label_141fbf9c1
                        
                        if (result != 0xffffffff && sub_141fbfbd0(arg1, *rbx, rbx[1].d).b == 0)
                            result.b = 0
                            break
        
    label_141fbf9c1:
        rbx = &rbx[4]
        
        if (rbx == rbp_2)
            goto label_141fbf9ce

return result
