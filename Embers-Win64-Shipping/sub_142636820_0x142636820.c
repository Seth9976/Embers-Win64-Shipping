// 函数: sub_142636820
// 地址: 0x142636820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = arg4
int64_t rsi = sx.q(*arg3)
int32_t rbx = arg3[1]
int64_t rbp = arg5
int64_t result_3 = arg6
int64_t var_58 = arg7
int64_t var_70 = rbp
int32_t var_84 = rsi.d
int32_t var_78 = rbx
sub_142633840(arg8, 0)
int32_t r13 = 0
int32_t* var_80

if (rbx s> 0)
    int32_t* rax_2 = nullptr
    int64_t rcx_2 = rsi << 2
    int64_t var_40_1 = rcx_2
    var_80 = nullptr
    
    do
        int32_t i = 0
        
        if (rsi.d s> 0)
            int32_t* r12_1 = rax_2
            int32_t var_68
            var_68.q = rax_2
            
            do
                int32_t rcx_3 = *(r12_1 + *(arg3 + 0x40))
                int32_t rax_5 = rcx_3 & 0xffffff
                uint64_t rsi_1 = zx.q(rax_5)
                uint64_t rbp_1 = zx.q((rcx_3 u>> 0x18) + rax_5)
                
                if (rsi_1 u< rbp_1)
                    uint64_t rbx_1 = zx.q(rsi_1.d)
                    int16_t rcx_6 = arg2
                    
                    do
                        if (*(*(arg3 + 0x50) + (rbx_1 << 1)) u>= rcx_6
                                && *(arg4 + (rbx_1 << 1)) == 0 && *(rbx_1 + *(arg3 + 0x58)) != 0)
                            sub_142633840(arg8, arg8[1].d + 1)
                            *(*arg8 + (sx.q(arg8[1].d) << 2) - 4) = i
                            sub_142633840(arg8, arg8[1].d + 1)
                            *(*arg8 + (sx.q(arg8[1].d) << 2) - 4) = r13
                            sub_142633840(arg8, arg8[1].d + 1)
                            *(*arg8 + (sx.q(arg8[1].d) << 2) - 4) = rsi_1.d
                            rcx_6 = arg2
                        
                        rsi_1 = zx.q(rsi_1.d + 1)
                        rbx_1 += 1
                    while (rbx_1 s< rbp_1)
                    
                    r12_1 = var_68.q
                
                rsi = zx.q(var_84)
                r12_1 = &r12_1[1]
                i += 1
                var_68.q = r12_1
            while (i s< rsi.d)
            
            rax_2 = var_80
            rcx_2 = var_40_1
            rbx = var_78
        
        rax_2 += rcx_2
        r13 += 1
        var_80 = rax_2
    while (r13 s< rbx)
    
    result = arg4
    rbp = var_70

int32_t rbx_2 = 0
int32_t var_78_1 = 0

if (arg8[1].d s> 0)
    int64_t result_2 = result_3
    int32_t i_1
    
    do
        uint64_t r12_3 = 0
        memcpy(result_2, result, arg3[2] * 2)
        memcpy(var_58, rbp, arg3[2] * 2)
        i_1 = arg8[1].d
        int32_t var_68_1 = 0
        
        if (i_1 s> 0)
            int64_t rbp_2 = 8
            int32_t rax_51
            
            do
                void* rax_11 = *arg8
                int32_t rdx_8 = *(rax_11 + rbp_2 - 4)
                int32_t r13_1 = *(rax_11 + rbp_2 - 8)
                int32_t* rax_12 = rax_11 + rbp_2
                var_80.d = rdx_8
                int64_t rax_13 = sx.q(*rax_12)
                int64_t rcx_15
                int16_t rbx_3
                int16_t r8_4
                
                if (rax_13.d s>= 0)
                    int64_t r11_1 = *(arg3 + 0x58)
                    rcx_15 = rax_13 * 2
                    rbx_3 = *(rcx_15 + result)
                    r8_4 = -1
                    char r10_1 = *(rax_13 + r11_1)
                    int32_t rsi_2 = *(*(arg3 + 0x48) + rax_13 * 0xc + 4)
                    uint32_t r9 = zx.d(rsi_2.b)
                    
                    if (r9 != 0xff)
                        uint64_t rdx_11 = zx.q((
                            *(*(arg3 + 0x40) + (sx.q(rdx_8 * var_84 + r13_1) << 2) - 4) & 0xffffff)
                            + r9)
                        
                        if (*(r11_1 + rdx_11) == r10_1)
                            int16_t rcx_18 = *(result + (rdx_11 << 1))
                            
                            if (rcx_18 != 0 && rcx_18 s>= 0)
                                uint32_t rdx_13 = zx.d(*(var_70 + (zx.q(rdx_11.d) << 1)))
                                
                                if (rdx_13 + 2 u< 0xffff)
                                    rbx_3 = rcx_18
                                    r8_4 = rdx_13.w + 2
                        
                        rdx_8 = var_80.d
                    
                    uint32_t r10_2 = zx.d((rsi_2 u>> 8).b)
                    
                    if (r10_2 != 0xff)
                        uint64_t rax_29 = zx.q((
                            *(*(arg3 + 0x40) + (sx.q((rdx_8 + 1) * var_84 + r13_1) << 2))
                            & 0xffffff) + r10_2)
                        
                        if (*(r11_1 + rax_29) == r10_1)
                            int16_t r10_3 = *(result + (rax_29 << 1))
                            
                            if (r10_3 != 0 && r10_3 s>= 0)
                                uint32_t r11_2 = zx.d(*(var_70 + (rax_29 << 1)))
                                
                                if (r11_2 + 2 u< zx.d(r8_4))
                                    rbx_3 = r10_3
                                    r8_4 = r11_2.w + 2
                    
                    int64_t r10_4 = r11_1
                    uint32_t r11_3 = zx.d((rsi_2 u>> 0x10).b)
                    char r11_4
                    
                    if (r11_3 == 0xff)
                        r11_4 = r10_1
                    else
                        uint64_t rax_39 = zx.q((
                            *(*(arg3 + 0x40) + (sx.q(var_80.d * var_84 + r13_1) << 2) + 4)
                            & 0xffffff) + r11_3)
                        r11_4 = r10_1
                        
                        if (*(rax_39 + r11_1) == r11_4)
                            int16_t r9_2 = *(result + (rax_39 << 1))
                            r10_4 = *(arg3 + 0x58)
                            
                            if (r9_2 != 0 && r9_2 s>= 0)
                                uint32_t r11_5 = zx.d(*(var_70 + (rax_39 << 1)))
                                
                                if (r11_5 + 2 u< zx.d(r8_4))
                                    rbx_3 = r9_2
                                    r8_4 = r11_5.w + 2
                                
                                r11_4 = r10_1
                    
                    uint32_t rsi_3 = rsi_2 u>> 0x18
                    
                    if (rsi_3 != 0xff)
                        uint64_t rdx_18 = zx.q((
                            *(*(arg3 + 0x40) + (sx.q((var_80.d - 1) * var_84 + r13_1) << 2))
                            & 0xffffff) + rsi_3)
                        
                        if (*(r10_4 + rdx_18) == r11_4)
                            int16_t rdx_19 = *(result + (rdx_18 << 1))
                            
                            if (rdx_19 != 0 && rdx_19 s>= 0)
                                uint32_t r9_3 = zx.d(*(var_70 + (zx.q(rdx_18.d) << 1)))
                                
                                if (r9_3 + 2 u< zx.d(r8_4))
                                    rbx_3 = rdx_19
                                    r8_4 = r9_3.w + 2
                    
                    result_2 = result_3
                
                if (rax_13.d s< 0 || rbx_3 == 0)
                    r12_3 = zx.q(r12_3.d + 1)
                else
                    *rax_12 = 0xffffffff
                    *(rcx_15 + result_2) = rbx_3
                    *(rcx_15 + var_58) = r8_4
                
                rbp_2 += 0xc
                i_1 = arg8[1].d
                rax_51 = var_68_1 + 3
                var_68_1 = rax_51
            while (rax_51 s< i_1)
            rbx_2 = var_78_1
            rbp = var_70
        
        int64_t result_1 = result
        result = result_2
        result_2 = result_1
        result_3 = result_1
        int64_t rax_52 = rbp
        rbp = var_58
        var_58 = rax_52
        var_70 = rbp
        
        if ((r12_3 * 3).d == i_1)
            break
        
        if (arg2 u> 0)
            rbx_2 += 1
            var_78_1 = rbx_2
            
            if (rbx_2 s>= arg1)
                break
    while (i_1 s> 0)

return result
