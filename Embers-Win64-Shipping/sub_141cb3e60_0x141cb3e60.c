// 函数: sub_141cb3e60
// 地址: 0x141cb3e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[8].d s< 0x180)
    return 

int64_t rcx = sx.q(arg1[0x23].d)

if (rcx.d s<= 0 || *(arg1 + 0x114) s<= 0)
    return 

(*(*arg1 + 0x178))(arg1, rcx)
uint64_t rax = zx.q(*(arg1 + 0x114))
int32_t i = 0
uint64_t arg_8

if (arg1[8].d s>= 0x202)
    if (rax.d s> 0)
        do
            int64_t rax_9 = *arg1
            arg_8 = 0
            (*(rax_9 + 0x140))(arg1, &arg_8)
            int64_t r14_4 = sx.q(arg2[1].d)
            int32_t rax_10 = (r14_4 + 1).d
            arg2[1].d = rax_10
            
            if (rax_10 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            i += 1
            *(*arg2 + (r14_4 << 3)) = arg_8
        while (i s< *(arg1 + 0x114))
else if (rax.d s> 0)
    do
        int16_t* var_58 = nullptr
        int32_t var_50_1 = 0
        sub_140a1d9d0(arg1, &var_58, arg3)
        
        if (arg1[8].d s< 0x1e4)
            uint64_t var_48[0x2]
            uint64_t* rax_2 = sub_140baa580(&var_48, &var_58)
            
            if (&var_58 != rax_2)
                int16_t* rcx_4 = var_58
                
                if (rcx_4 != 0)
                    sub_140a74f90(rcx_4)
                
                var_58 = *rax_2
                *rax_2 = 0
                var_50_1 = rax_2[1].d
                var_50_1 = *(rax_2 + 0xc)
                rax_2[1] = 0
            
            uint64_t rcx_6 = var_48[0]
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            if (var_50_1 s> 1)
                int64_t var_38
                int64_t* rax_5 = sub_140baf760(&var_38, &var_58)
                
                if (&var_58 != rax_5)
                    int16_t* rcx_8 = var_58
                    
                    if (rcx_8 != 0)
                        sub_140a74f90(rcx_8)
                    
                    var_58 = *rax_5
                    *rax_5 = 0
                    var_50_1 = rax_5[1].d
                    var_50_1 = *(rax_5 + 0xc)
                    rax_5[1] = 0
                
                int64_t rcx_10 = var_38
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
        
        int16_t* rdx_4 = &data_142d40450
        
        if (var_50_1 != 0)
            rdx_4 = var_58
        
        uint64_t* rax_8
        rax_8, arg3 = sub_140b58260(&arg_8, rdx_4, 1)
        int64_t r14_3 = sx.q(arg2[1].d)
        int32_t rcx_12 = (r14_3 + 1).d
        arg2[1].d = rcx_12
        
        if (rcx_12 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        *(*arg2 + (r14_3 << 3)) = *rax_8
        int16_t* rcx_15 = var_58
        
        if (rcx_15 != 0)
            rax, arg3 = sub_140a74f90(rcx_15)
        
        i += 1
    while (i s< *(arg1 + 0x114))
