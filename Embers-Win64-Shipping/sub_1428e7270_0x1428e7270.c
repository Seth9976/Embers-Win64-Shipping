// 函数: sub_1428e7270
// 地址: 0x1428e7270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rbx = arg2

if (arg1 != 0 && sub_142898c70(*arg1) s> rbx && rbx s>= 0)
    int32_t* rdi = *arg1
    void* result = sub_142898840(rdi, rbx)
    int32_t rax_2 = sub_142898c70(rdi)
    arg1[1].d = 1
    
    if (rbx != rax_2)
        int32_t rsi_1
        
        if (rbx == 0)
            rsi_1 = *(result + 0x10) - 1
        else
            rsi_1 = *(sub_142898ea0(rdi, rbx - 1) + 0x10)
        
        if (rsi_1 + 1 s< *(sub_142898ea0(rdi, rbx) + 0x10) && rbx s< rax_2)
            do
                void* rax_5 = sub_142898ea0(rdi, rbx)
                rbx += 1
                *(rax_5 + 0x10) -= 1
            while (rbx s< rax_2)
    
    return result

return 0
