// 函数: sub_1422d0010
// 地址: 0x1422d0010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x30)

if (rdx == 0)
    return 

int64_t* rsi_1 = nullptr
void* var_78
void* var_70
char* var_68
uint64_t* var_60

if (((*(*(arg3 + 0x28) + 0xa4) u>> 1).b & 1) != 0)
    int32_t rcx_2 = 0
    uint64_t var_38 = 0
    int32_t i = 0
    int32_t var_30_1 = 0
    int32_t var_2c_1 = 0
    
    if (rdx s> 0)
        do
            int64_t rax_1 = *(arg1 + 0x28)
            int64_t* rcx_3 = *(rsi_1 + rax_1)
            char rax_7 = (*(*rcx_3 + 0x80))(rcx_3, 
                sx.q(*(rcx_3 + 0x4c)) + sx.q(*(rsi_1 + rax_1 + 0x10) * *(rcx_3 + 0x3c)) + arg6, 0, 
                0, var_78, var_70, var_68, var_60)
            
            if (rax_7 == 0)
                int64_t rax_8 = *(arg1 + 0x28)
                var_60 = &var_38
                var_68.b = 0
                var_70.d = 0
                var_78 = arg6
                sub_1422b9f80(arg1, arg1 + 0x48, zx.d(*(rsi_1 + rax_8 + 0x1c)), 
                    zx.d(*(rsi_1 + rax_8 + 0x1e)), var_78, 0, 0, var_60)
            
            i += 1
            rsi_1 = &rsi_1[6]
        while (i s< *(arg1 + 0x30))
        
        rcx_2 = var_2c_1
        rsi_1 = zx.q(var_30_1)
    
    int32_t rax_9 = (rsi_1 + 1).d
    int32_t var_30_2 = rax_9
    
    if (rax_9 s> rcx_2)
        sub_140594770(&var_38)
    
    *(var_38 + (sx.q(rsi_1.d) << 1)) = 0
    uint64_t* var_68_1 = &var_38
    sub_1422d02c0(arg1, 0, 0, arg6, *(arg3 + 0x28), arg4)
    uint64_t rcx_8 = var_38
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
else if (rdx s> 0)
    int32_t rbp_1 = 1
    int64_t r12_1 = 0
    
    do
        int64_t* rdx_5 = *(arg1 + 0x28)
        int64_t* r10_1 = *(rdx_5 + r12_1)
        int32_t var_58
        int64_t* var_50
        int64_t var_48
        uint64_t rax
        void* r15
        
        if (r10_1 == 0 || ((zx.q(*(r10_1[1] + 0x10)) u>> 0x11).b & 1) == 0)
            if (data_143a2fd9c == 0 || *(arg1 + 0x80) == 0 || test_bit(zx.q(r10_1[8].d), 8))
                char rax_23 = (*(*r10_1 + 0x80))(r10_1, 
                    sx.q(*(r10_1 + 0x4c)) + sx.q(*(rdx_5 + r12_1 + 0x10) * *(r10_1 + 0x3c)) + arg6, 
                    0, 0, var_78, var_70, var_68, var_60, var_58, var_50, var_48)
                r15.b = rax_23 == 0
            else
                void* rcx_11 = arg1 + 0x88
                void* rax_14 = *(rcx_11 + 0x10)
                
                if (rax_14 != 0)
                    rcx_11 = rax_14
                
                int32_t rax_15 = rsi_1.d
                
                if (rsi_1.d s< 0)
                    rax_15 = (rsi_1 + 0x1f).d
                
                r15.b = (*(rcx_11 + (sx.q(rax_15 s>> 5) << 2)) & rbp_1) != 0
            
            rax, arg5 = sub_140b560b0(arg4, r15.b)
        
        if ((r10_1 != 0 && ((zx.q(*(r10_1[1] + 0x10)) u>> 0x11).b & 1) != 0) || r15.b != 0)
            int64_t rax_24 = *(arg1 + 0x28)
            int64_t r8_1 = arg4[0x17]
            var_48 = 0
            var_50 = arg1 + 0x68
            var_58 = 0
            char arg_8 = 0
            var_60.d = 0
            var_68 = &arg_8
            var_70 = arg6
            var_78.d = zx.d(*(r12_1 + rax_24 + 0x1e))
            rax, arg5 = sub_1422d1b10(arg1, arg4, r8_1, zx.d(*(r12_1 + rax_24 + 0x1c)), arg5, arg2, 
                var_78.d, var_70, var_68, 0, 0, var_50, 0)
        
        rsi_1 = zx.q(rsi_1.d + 1)
        rbp_1 = rol.d(rbp_1, 1)
        r12_1 += 0x30
    while (rsi_1.d s< *(arg1 + 0x30))
