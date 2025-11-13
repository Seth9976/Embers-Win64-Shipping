// 函数: sub_142c5baf0
// 地址: 0x142c5baf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0

if (arg1 == 0)
    return zx.q((&arg1[0x3d]).d)

char* rax_1 = strstr(arg1, "-----BEGIN PUBLIC KEY-----")

if (rax_1 != 0)
    void* rbx_1 = rax_1 - arg1
    
    if (rax_1 == arg1 || *(rbx_1 + arg1 - 1) == 0xa)
        void* i = rbx_1 + 0x1a
        char* rax_3 = strstr(i + arg1, "\n-----END PUBLIC KEY-----")
        
        if (rax_3 == 0)
            return zx.q((&rax_3[0x3d]).d)
        
        void* rbp_2 = rax_3 - arg1
        char* rax_4 = data_143ccb898(rbp_2 - i + 1)
        
        if (rax_4 == 0)
            return zx.q((&rax_4[0x1b]).d)
        
        for (; i u< rbp_2; i += 1)
            char rax_5 = *(i + arg1)
            
            if (rax_5 != 0xa && rax_5 != 0xd)
                rax_4[rdi] = rax_5
                rdi += 1
        
        rax_4[rdi] = 0
        int32_t rax_6 = sub_142c75b70(rax_4, arg2, arg3)
        data_143ccb8a0(rax_4)
        return zx.q(rax_6)

return 0x3d
