// 函数: sub_142629b70
// 地址: 0x142629b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg3
int64_t* rbx = arg9
int64_t result = arg5
int64_t r14 = arg6
uint32_t rdi = zx.d(*(rax + 0x32))
uint64_t r13 = zx.q(*(rax + 0x30))
int64_t result_2 = arg7
int64_t var_58 = arg8
int64_t result_1 = result
int64_t var_78 = r14
int64_t* var_48 = rbx
uint32_t var_98 = rdi
sub_142616290(rbx, 0)
int32_t rsi = 0

if (rdi != 0)
    int32_t r14_1 = 0
    int64_t r12 = sx.q(r13.d)
    char* r15_1 = nullptr
    int32_t var_68
    var_68.q = 0
    
    do
        int32_t i = 0
        
        if (r13.d != 0)
            char* rbx_1 = r15_1
            int16_t rcx_3 = arg2
            
            do
                if (*(*(arg4 + 8) + (rbx_1 << 1)) u>= rcx_3 && *(result_1 + (rbx_1 << 1)) == 0
                        && rbx_1[arg3[3]] != 0)
                    sub_142616290(var_48, var_48[1].d + 1)
                    *(*var_48 + (sx.q(var_48[1].d) << 2) - 4) = i
                    sub_142616290(var_48, var_48[1].d + 1)
                    *(*var_48 + (sx.q(var_48[1].d) << 2) - 4) = rsi
                    sub_142616290(var_48, var_48[1].d + 1)
                    *(*var_48 + (sx.q(var_48[1].d) << 2) - 4) = r14_1 + i
                    rcx_3 = arg2
                
                i += 1
                rbx_1 = &rbx_1[1]
            while (i s< r13.d)
            
            r15_1 = nullptr
            r12 = sx.q(r13.d)
        
        rdi = var_98
        r15_1 = &r15_1[r12]
        rsi += 1
        var_68.q = r15_1
        r14_1 += r13.d
    while (rsi s< rdi)
    
    result = result_1
    rbx = var_48
    r14 = var_78

int32_t rsi_1 = 0
int32_t var_68_1 = 0

if (rbx[1].d s> 0)
    int64_t rdi_3 = sx.q(rdi) * r13 * 2
    int64_t var_38_1 = rdi_3
    int32_t i_1
    
    do
        int64_t result_3 = result_2
        uint64_t r15_3 = 0
        memcpy(result_3, result, rdi_3.d)
        memcpy(var_58, r14, rdi_3.d)
        i_1 = rbx[1].d
        int32_t var_70_1 = 0
        
        if (i_1 s> 0)
            int64_t rbp_1 = 8
            int32_t rax_27
            
            do
                void* rax_7 = *rbx
                int32_t rdi_4 = *(rax_7 + rbp_1 - 8)
                int32_t rbx_2 = *(rax_7 + rbp_1 - 4)
                int32_t* rax_8 = rax_7 + rbp_1
                int64_t rax_9 = sx.q(*rax_8)
                int16_t rsi_2
                int16_t r11_1
                
                if (rax_9.d s>= 0)
                    int64_t* r10_1 = arg3
                    rsi_2 = *(result + (rax_9 << 1))
                    r11_1 = -1
                    int64_t rcx_12 = r10_1[3]
                    char r12_2 = *(rax_9 + rcx_12)
                    
                    if (rdi_4 - 1 s>= 0 && rdi_4 - 1 s< r13.d && rbx_2 s>= 0 && rbx_2 s< var_98
                            && (*(rax_9 + r10_1[4]) & 1) != 0)
                        int64_t r9 = sx.q(rbx_2 * r13.d + rdi_4 - 1)
                        
                        if (*(r9 + rcx_12) == r12_2)
                            int16_t r10_2 = *(result_1 + (r9 << 1))
                            
                            if (r10_2 != 0)
                                uint32_t rcx_13 = zx.d(*(var_78 + (r9 << 1)))
                                
                                if (rcx_13 + 2 u< 0xffff)
                                    rsi_2 = r10_2
                                    r11_1 = rcx_13.w + 2
                            
                            r10_1 = arg3
                    
                    uint32_t rcx_17 = var_98
                    int64_t rax_17 = rcx_12
                    int64_t result_4
                    
                    if (rdi_4 s< 0 || rdi_4 s>= r13.d || rbx_2 + 1 s< 0 || rbx_2 + 1 s>= rcx_17)
                        result_4 = result_1
                    else
                        result_4 = result_1
                        
                        if ((*(rax_9 + r10_1[4]) & 2) == 0)
                            rcx_17 = var_98
                        else
                            int64_t rcx_15 = sx.q((rbx_2 + 1) * r13.d + rdi_4)
                            
                            if (*(rcx_15 + rcx_12) != r12_2)
                                rcx_17 = var_98
                            else
                                int16_t r10_3 = *(result_4 + (rcx_15 << 1))
                                
                                if (r10_3 == 0)
                                    rcx_17 = var_98
                                else
                                    uint32_t r9_1 = zx.d(*(var_78 + (rcx_15 << 1)))
                                    rax_17 = rcx_12
                                    rcx_17 = var_98
                                    
                                    if (r9_1 + 2 u< zx.d(r11_1))
                                        rsi_2 = r10_3
                                        r11_1 = r9_1.w + 2
                                    
                                    result_4 = result_1
                    
                    int64_t* r10_5 = arg3
                    
                    if (rdi_4 + 1 s>= 0 && rdi_4 + 1 s< r13.d && rbx_2 s>= 0 && rbx_2 s< rcx_17
                            && (*(rax_9 + r10_5[4]) & 4) != 0)
                        int64_t rdx_16 = sx.q(rbx_2 * r13.d + rdi_4 + 1)
                        
                        if (*(rdx_16 + rax_17) == r12_2)
                            int16_t r10_4 = *(result_4 + (rdx_16 << 1))
                            
                            if (r10_4 != 0)
                                uint32_t r9_2 = zx.d(*(var_78 + (rdx_16 << 1)))
                                
                                if (r9_2 + 2 u< zx.d(r11_1))
                                    rsi_2 = r10_4
                                    r11_1 = r9_2.w + 2
                            
                            r10_5 = arg3
                    
                    if (rdi_4 s< 0 || rdi_4 s>= r13.d || rbx_2 - 1 s< 0 || rbx_2 - 1 s>= var_98
                            || (*(rax_9 + r10_5[4]) & 8) == 0)
                        result = result_1
                    else
                        int64_t rax_21 = sx.q(rdi_4 + (rbx_2 - 1) * r13.d)
                        result = result_1
                        
                        if (*(rax_21 + rax_17) == r12_2)
                            int16_t rdx_18 = *(result + (rax_21 << 1))
                            
                            if (rdx_18 != 0)
                                uint32_t r8_4 = zx.d(*(var_78 + (rax_21 << 1)))
                                
                                if (r8_4 + 2 u< zx.d(r11_1))
                                    rsi_2 = rdx_18
                                    r11_1 = r8_4.w + 2
                
                if (rax_9.d s< 0 || rsi_2 == 0)
                    r15_3 = zx.q(r15_3.d + 1)
                else
                    *rax_8 = 0xffffffff
                    *(result_2 + (rax_9 << 1)) = rsi_2
                    *(var_58 + (rax_9 << 1)) = r11_1
                
                rbp_1 += 0xc
                rbx = var_48
                rax_27 = var_70_1 + 3
                var_70_1 = rax_27
                i_1 = rbx[1].d
            while (rax_27 s< i_1)
            r14 = var_78
            rsi_1 = var_68_1
            rdi_3 = var_38_1
            result_3 = result_2
        
        int64_t rax_28 = r14
        result_2 = result
        r14 = var_58
        result = result_3
        var_58 = rax_28
        result_1 = result_3
        var_78 = r14
        
        if ((r15_3 * 3).d == i_1)
            break
        
        if (arg2 u> 0)
            rsi_1 += 1
            var_68_1 = rsi_1
            
            if (rsi_1 s>= arg1)
                break
    while (i_1 s> 0)

return result
