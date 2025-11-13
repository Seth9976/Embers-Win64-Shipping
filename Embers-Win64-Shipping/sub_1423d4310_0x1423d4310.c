// 函数: sub_1423d4310
// 地址: 0x1423d4310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg2 + 0x1b0) s<= 0)
    return 

int64_t r14_1 = 0

do
    char* rbx_2 = *(arg2 + 0x1a8) + r14_1
    
    if (zx.d(*rbx_2) == arg3)
        int16_t* rdx
        
        if (arg4[1].d == 0)
            rdx = &data_142d40450
        else
            rdx = *arg4
        
        int16_t* const rcx
        
        if (*(rbx_2 + 0x10) == 0)
            rcx = &data_142d40450
        else
            rcx = *(rbx_2 + 8)
        
        if (sub_140a54510(rcx, rdx).d == 0)
        label_1423d43b6:
            int32_t j = 0
            
            if (*(rbx_2 + 0x30) s> 0)
                int64_t* r8 = nullptr
                
                do
                    int32_t rax_2 = *(*(r8 + *(rbx_2 + 0x28)) + 0xc)
                    uint64_t rax
                    
                    if (rax_2 s>= data_143e1d9b4)
                        rax = 0
                    else
                        uint32_t rdx_1 = zx.d(rax_2.w)
                        
                        if (rax_2 s< 0)
                            rax_2 += 0xffff
                            rdx_1 -= 0x10000
                        
                        rax = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(rdx_1) * 0x18
                    
                    *(rax + 8) &= 0xbfffffff
                    j += 1
                    r8 = &r8[1]
                while (j s< *(rbx_2 + 0x30))
            
            *(rbx_2 + 0x30) = 0
            
            if (*(rbx_2 + 0x34) != 0)
                sub_1405c5570(&rbx_2[0x28], 0)
        else
            int16_t* const rcx_1
            
            if (arg4[1].d == 0)
                rcx_1 = &data_142d40450
            else
                rcx_1 = *arg4
            
            if (sub_140a54510(rcx_1, &data_142d40450).d == 0)
                goto label_1423d43b6
    
    i += 1
    r14_1 += 0x38
while (i s< *(arg2 + 0x1b0))
