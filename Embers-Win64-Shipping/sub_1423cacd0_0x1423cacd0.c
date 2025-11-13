// 函数: sub_1423cacd0
// 地址: 0x1423cacd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x3d) & 8) != 0 && arg1[0x1c] == 0)
    void* rbx_1 = arg1[0xf]
    
    if (rbx_1 != 0 && *(rbx_1 + 0x58) != 0 && arg2 s< sub_1423c1c20(arg1))
        char rbx_2 = *(rbx_1 + 0x59)
        void*** rax_1 = j_sub_140a82f30(0x110)
        void*** rax_2
        
        if (rbx_2 == 0)
            if (rax_1 == 0)
                rax_2 = nullptr
            else
                rax_2 = sub_1423a56d0(rax_1, arg1, arg2)
        else if (rax_1 == 0)
            rax_2 = nullptr
        else
            rax_2 = sub_1423a57d0(rax_1, arg1, arg2)
        
        int64_t* rcx_2 = arg1[0x1c]
        arg1[0x1c] = rax_2
        
        if (rax_2 != 0)
            *(rax_2 + 0x5c) += 1
        
        if (rcx_2 != 0)
            sub_142394bb0(rcx_2)
        
        void* rax_3
        rax_3.b = *(arg1[0x1c] + 0x54) == 0
        return rax_3

int32_t rax
rax.b = 0
return rax
