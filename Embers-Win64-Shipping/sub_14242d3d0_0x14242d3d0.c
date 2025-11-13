// 函数: sub_14242d3d0
// 地址: 0x14242d3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x98)
void* rbp = &rdi[sx.q(*(arg1 + 0xa0))]
int64_t result

if (rdi == rbp)
label_14242d453:
    result.b = 1
else
    while (true)
        int64_t* rbx_1 = *rdi
        
        if (rbx_1 != 0 && (*(*rbx_1 + 0x278))(rbx_1).b != 0)
            if (rbx_1[0x17].b == 3)
                result.b = 0
                break
            
            void* rsi_1 = rbx_1[0x25]
            
            if (rsi_1 == 0)
                result.b = 0
                break
            
            result = (*(*rbx_1 + 0x270))(rbx_1)
            
            if ((*(rsi_1 + 0x1f4) u>> 5 & 1) != result.b)
                result.b = 0
                break
        
        rdi = &rdi[1]
        
        if (rdi == rbp)
            goto label_14242d453

return result
