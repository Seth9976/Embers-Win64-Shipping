// 函数: sub_14271ee10
// 地址: 0x14271ee10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = sub_140d3c6e0(arg2)

if (i != 0)
    int64_t* r8_1 = arg1[0x11]
    int64_t rcx_1 = sx.q(arg1[0x12].d)
    int64_t* rdx = r8_1
    void* rax = &r8_1[rcx_1]
    
    if (r8_1 != rax)
        while (*rdx != i)
            rdx = &rdx[1]
            
            if (rdx == rax)
                goto label_14271ee74
    
    if (r8_1 == rax || ((rdx - r8_1) s>> 3).d == 0xffffffff)
    label_14271ee74:
        int32_t rax_1 = (rcx_1 + 1).d
        arg1[0x12].d = rax_1
        
        if (rax_1 s> *(arg1 + 0x94))
            sub_1405a4d70(&arg1[0x11])
        
        *(arg1[0x11] + (rcx_1 << 3)) = i
    
    i = sub_14272c120(arg1, *(i + 0xa0))
    arg1[8].d = 0

return i
