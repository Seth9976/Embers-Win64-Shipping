// 函数: sub_141979ed0
// 地址: 0x141979ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_10 = 0
uint64_t rbx
rbx.b = 0
*arg3 = 0.o

if (sub_141976740() != 0)
    AcquireSRWLockExclusive(&data_143f01fc8)
    
    if (data_143f0f148 == 0)
        int64_t* rax_1 = j_sub_140a82f30(0x128)
        uint64_t* rbx_1 = rax_1
        
        if (rax_1 == 0)
            rbx_1 = nullptr
        else
            *rax_1 = 0
            void* rcx = &rax_1[8]
            rax_1[1] = 0
            *(rax_1 + 0x14) = 0
            rax_1[4] = 0
            rax_1[5].d = 2
            rax_1[6] = 0
            rax_1[7] = 0
            *(rcx + 0x10) = 0
            *(rcx + 0x18) = 0
            *(rcx + 0x1c) = 0x80
            void* rax_2 = *(rcx + 0x10)
            
            if (rax_2 != 0)
                rcx = rax_2
            
            *rcx = 0
            *(rcx + 8) = 0
            void* rcx_1 = &rbx_1[0x13]
            rbx_1[0xc].d = 0xffffffff
            *(rbx_1 + 0x64) = 0
            rbx_1[0xe] = 0
            rbx_1[0xf].d = 0
            rbx_1[0x10].d = 2
            rbx_1[0x11] = 0
            rbx_1[0x12] = 0
            *(rcx_1 + 0x1c) = 0x80
            void* rax_3 = *(rcx_1 + 0x10)
            
            if (rax_3 != 0)
                rcx_1 = rax_3
            
            __builtin_memset(rcx_1, 0, 0x1c)
            rbx_1[0x17].d = 0xffffffff
            *(rbx_1 + 0xbc) = 0
            rbx_1[0x19] = 0
            rbx_1[0x1a].d = 0
            sub_140b214c0(&rbx_1[0x1b])
            __builtin_memset(&rbx_1[0x1d], 0, 0x40)
        
        data_143f0f148 = rbx_1
        rbx = zx.q(sub_141978d00(rbx_1, arg1, arg2, arg3))
    
    ReleaseSRWLockExclusive(&data_143f01fc8)

return zx.q(rbx.b)
