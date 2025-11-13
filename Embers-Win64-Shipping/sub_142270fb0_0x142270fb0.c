// 函数: sub_142270fb0
// 地址: 0x142270fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(arg2)
int64_t* rcx = *(data_143f5b298 + 0xb08)

if (rcx != 0)
    int64_t* rax_2 = (*(*rcx + 0x110))(rcx)
    
    if (rax_2 != 0)
        int64_t var_d0
        var_d0.d = arg7
        int32_t var_d8
        var_d8.q = arg6
        
        if ((*(*rax_2 + 8))(rax_2, zx.q(rsi.d), zx.q(arg3), arg4, var_d8, var_d0) != 0)
            return 1

uint64_t r12
r12.b = 0

if (arg1[0x69] != 0)
    int32_t var_c8_1 = arg7
    int64_t var_d0_1 = arg6
    char rax_4
    r12 = zx.q(rax_4)
    
    if ((arg1[0x87].b & 0x14) != 0)
        void var_b8
        memset(&var_b8, 0, 0x88)
        int32_t var_b0_1 = 0x3f800000
        int32_t var_d8_1
        var_d8_1.q = &var_b8
        char rax_5 = sub_14226ca40(arg1, *arg4, zx.d(*(arg1 + 0x453)), 1, var_d8_1)
        void* r13_2 = (rsi << 3) + 0x464 + arg1
        void* rax_6 = sub_140d3c6e0(r13_2)
        void* rbx_2
        void var_48
        
        if (rax_5 == 0)
            rbx_2 = nullptr
        else
            rbx_2 = sub_140d3c6e0(&var_48)
        int64_t* rcx_7 = arg1[0x56]
        
        if (rcx_7 != 0 && (arg3 == 0 || arg3 == 5))
            int32_t r8_3
            r8_3.b = arg3 != 0
            
            if (sub_1420a6c90(rcx_7, *arg4, r8_3) != 0)
                rbx_2 = nullptr
        
        if (arg3 == 0)
            char rax_10 = (arg1[0x87].d).b
            
            if ((rax_10 & 4) != 0 && rbx_2 != 0)
                sub_141f0fdd0(rbx_2, rsi.d)
                rax_10 = (arg1[0x87].d).b
            
            if ((rax_10 & 0x10) != 0)
                sub_141f10360(rsi.d, rax_6, rbx_2)
                sub_140d3a3a0(r13_2, rbx_2)
        else if (arg3 == 5)
            char rax_9 = (arg1[0x87].d).b
            
            if ((rax_9 & 4) != 0 && rbx_2 != 0)
                sub_141f0ff30(rbx_2, rsi.d)
                rax_9 = (arg1[0x87].d).b
            
            if ((rax_9 & 0x10) != 0)
                if (rax_6 != rbx_2 && rax_6 != 0)
                    sub_141f10360(rsi.d, rax_6, rbx_2)
                
                sub_141f10360(rsi.d, rbx_2, nullptr)
                sub_140d3a3a0(r13_2, nullptr)

return r12.b
