// 函数: sub_1421b5c20
// 地址: 0x1421b5c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_1421b5a70(arg1, arg2)
int32_t rbx = 0

if (arg2[1].d s> 0)
    int64_t* rsi_1 = nullptr
    
    while (true)
        int64_t rax = *arg2
        int16_t* const rcx
        
        if (*(rsi_1 + rax + 8) == 0)
            rcx = &data_142d40450
        else
            rcx = *(rsi_1 + rax)
        
        result = sub_140a54510(rcx, u"SubImageIndex")
        
        if (result == 0)
            break
        
        rbx += 1
        rsi_1 = &rsi_1[3]
        
        if (rbx s>= arg2[1].d)
            return result
    
    if (rbx != 0xffffffff)
        int64_t rsi_2 = sx.q(rbx) * 0x18
        int64_t rcx_2 = *(rsi_2 + *arg2)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int32_t rcx_5 = arg2[1].d
        int32_t rax_4 = rcx_5 - rbx
        
        if (rax_4 != 1)
            int64_t r9_1 = *arg2
            memmove(rsi_2 + r9_1, r9_1 + sx.q(rbx + 1) * 0x18, (rax_4 - 1) * 0x18)
            rcx_5 = arg2[1].d
        
        arg2[1].d = rcx_5 - 1
        return sub_1405fde90(arg2)

return result
