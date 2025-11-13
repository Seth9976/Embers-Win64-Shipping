// 函数: sub_1423dcc50
// 地址: 0x1423dcc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (int32_t i = 0; i s>= 0; i += 1)
    if (i s>= *(arg1 + 0xc40))
        break
    
    char* rdx = *(*(arg1 + 0xc38) + (sx.q(i) << 3))
    
    if (*(rdx + 0x278) != 0)
        int64_t rcx = *(rdx + 0x218)
        
        if (rcx != 0 && ((*rdx - 1) & 0xfd) == 0)
            int64_t* rax_3 = sub_140a3f490(rcx)
            
            for (int64_t* j = *rax_3; j != &j[sx.q(rax_3[1].d)]; j = &j[1])
                void* const result = *j
                
                if (result != 0 && *(result + 0xb8) == arg2)
                    return result

return nullptr
