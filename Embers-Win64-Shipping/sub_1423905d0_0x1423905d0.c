// 函数: sub_1423905d0
// 地址: 0x1423905d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg5

while (true)
    void* rbx_1 = *rcx
    
    if (rbx_1 != 0)
        void* rax_1 = sub_140cdddf0()
        void* r8 = *(rbx_1 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(r8 + 0x38) && *(*(r8 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            *arg5 = *(rbx_1 + 0x28)
            rcx = arg5
            
            if (*rcx != 0)
                continue
            
            *(rcx + 9) = 1
            *arg2 = *arg4
            arg2[1] = 0
            arg2[1] = arg4[1]
            arg4[1] = 0
            arg2[2].d = arg4[2].d
            *(arg2 + 0x14) = *(arg4 + 0x14)
            arg4[2] = 0
            break
        
        rcx = arg5
    
    int64_t var_78
    int64_t* rax_9 = sub_140d21e10(*rcx, &var_78, 0)
    int64_t var_48
    __builtin_memset(&var_48, 0, 0x18)
    int64_t var_68
    int128_t var_88 = *sub_140a1dfc0(rax_9, &var_68)
    sub_140d2c760(&var_48, &var_88)
    int64_t rcx_6 = var_78
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    var_68 = var_48
    int64_t var_60
    int64_t var_40
    sub_140596d10(&var_60, &var_40)
    int64_t var_50_1 = arg3
    var_88:8.q = &var_68
    var_88.q = arg4
    int32_t var_98
    sub_14237ae90(arg1 + 0x60, &var_98, &var_88, nullptr)
    int64_t rcx_9 = var_60
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    int64_t* rbx_2 = arg1 + 0x10
    var_88.q = rbx_2
    sub_142394f50(rbx_2, arg4)
    sub_14238c6f0(rbx_2, &var_98, &var_48)
    int64_t rax_12 = sx.q(var_98)
    
    if (rax_12.d != 0xffffffff)
        void* r14_1 = *rbx_2 + rax_12 * 0x28
        
        if (r14_1 != 0 && r14_1 != -0x18)
            void* rsi_1 = *(r14_1 + 0x18)
            int64_t* rbx_3 = arg5
            int32_t i_4 = *(rsi_1 + 0x18)
            
            if (i_4 != 0)
                int32_t rax_14 = rbx_3[3].d
                int32_t rdx_9 = rax_14 + i_4
                
                if (rdx_9 s> *(rbx_3 + 0x1c))
                    sub_1405a5410(&rbx_3[2], rdx_9)
                    rax_14 = rbx_3[3].d
                
                int64_t* rdx_10 = *(rsi_1 + 0x10)
                int32_t i_2 = i_4
                int64_t* rcx_15 = (sx.q(rax_14) << 4) + rbx_3[2]
                int32_t i
                
                do
                    *rcx_15 = *rdx_10
                    void* rax_16 = rdx_10[1]
                    rcx_15[1] = rax_16
                    
                    if (rax_16 != 0)
                        *(rax_16 + 8) += 1
                    
                    rcx_15 = &rcx_15[2]
                    rdx_10 = &rdx_10[2]
                    i = i_2
                    i_2 -= 1
                while (i != 1)
                rbx_3[3].d += i_4
            
            sub_14095cd40(*(r14_1 + 0x18) + 0x10, 0)
            void* rsi_2 = *(r14_1 + 0x18)
            int64_t* rbx_4 = arg5
            int32_t i_5 = *(rsi_2 + 0x28)
            
            if (i_5 != 0)
                int32_t rax_17 = rbx_4[5].d
                int32_t rdx_11 = rax_17 + i_5
                
                if (rdx_11 s> *(rbx_4 + 0x2c))
                    sub_1405a5410(&rbx_4[4], rdx_11)
                    rax_17 = rbx_4[5].d
                
                int64_t* rdx_12 = *(rsi_2 + 0x20)
                int32_t i_3 = i_5
                int64_t* rcx_21 = (sx.q(rax_17) << 4) + rbx_4[4]
                int32_t i_1
                
                do
                    *rcx_21 = *rdx_12
                    void* rax_19 = rdx_12[1]
                    rcx_21[1] = rax_19
                    
                    if (rax_19 != 0)
                        *(rax_19 + 0xc) += 1
                    
                    rcx_21 = &rcx_21[2]
                    rdx_12 = &rdx_12[2]
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
                rbx_4[5].d += i_5
            
            sub_14238b300(*(r14_1 + 0x18) + 0x20, 0)
            void* rcx_24 = *(r14_1 + 0x18)
            
            if (rcx_24 != 0)
                sub_142384460(rcx_24, 1)
            
            rbx_2 = var_88.q
    
    var_88.q = &var_48
    var_88:8.q = &arg5
    sub_14237ace0(rbx_2, &var_98, &var_88, nullptr)
    *arg2 = var_48
    arg2[1] = var_40
    int64_t var_38
    arg2[2].d = var_38.d
    *(arg2 + 0x14) = var_38:4.d
    int64_t var_38_1 = 0
    var_40 = 0
    break

int64_t rcx_26 = arg4[1]

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

return arg2
