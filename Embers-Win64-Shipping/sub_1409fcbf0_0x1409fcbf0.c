// 函数: sub_1409fcbf0
// 地址: 0x1409fcbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbp = arg3

if (arg3 != 0)
    void* rax_1 = sub_140a0af10()
    void* rdx = *(rbp + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        void*** rax_4 = j_sub_140a82f30(0x18)
        
        if (rax_4 == 0)
            *arg2 = nullptr
            return arg2
        
        void* rax_5 = sub_140a0af10()
        void* rdx_1 = *(rbp + 0x10)
        int64_t* rbx = nullptr
        int64_t rax_6 = sx.q(*(rax_5 + 0x38))
        
        if (rax_6.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
            rbp = nullptr
        
        rax_4[1] = rbp
        *rax_4 = &data_142e4b468
        int64_t* rax_8 = j_sub_140a82f30(0x360)
        
        if (rax_8 != 0)
            rbx = sub_141cd2e90(rax_8)
        
        rax_4[2] = rbx
        *arg2 = rax_4
        return arg2

*arg2 = nullptr
return arg2
