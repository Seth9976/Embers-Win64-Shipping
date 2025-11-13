// 函数: sub_141ad7840
// 地址: 0x141ad7840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
void var_188
void* rsp_1 = &var_188
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int128_t zmm6
int128_t var_38 = zmm6
char var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t rdi = arg1
int64_t rsi = arg2
int64_t r12 = arg3
int64_t rdx = arg11[4]

if (arg11[2] s< arg1)
    rdi = arg11[2]

if (arg11[3] s< arg2)
    rsi = arg11[3]

int64_t rdi_1 = rdi * rdx
int64_t rsi_1 = rsi * rdx

if (rdi_1 u> 0x3fffffffffffffff)
    j_sub_140a82f30(-1)

void* r14 = *arg11
int64_t _Size = rdi_1 << 2
void* var_118 = r14

if (r14 == 0)
    if (_Size u> 0x20000)
        void* rax_4 = malloc(_Size)
        var_118 = rax_4
        r14 = rax_4
        
        if (rax_4 == 0 && _Size != 0)
            j_sub_140a82f30(rax_4 - 1)
    else
        int64_t rcx = _Size + 0x1e
        
        if (rcx u<= _Size + 0xf)
            rcx = 0xffffffffffffff0
        
        int64_t rcx_1 = rcx & 0xfffffffffffffff0
        __chkstk(rcx_1)
        rsp_1 = &var_188 - rcx_1
        r14 = (rsp_1 + 0x6f) & 0xfffffffffffffff0
        var_118 = r14

void* rax_5 = nullptr

if (*arg11 == 0)
    rax_5 = r14

if (rsi_1 u> 0x3fffffffffffffff)
    j_sub_140a82f30(-1)

void* r13 = arg11[1]
int64_t _Size_1 = rsi_1 << 2
void* rax_6

if (r13 != 0)
    rax_6 = r13
else if (_Size_1 u> 0x20000)
    void* rax_9 = malloc(_Size_1)
    r13 = rax_9
    
    if (rax_9 == 0 && _Size_1 != 0)
        j_sub_140a82f30(rax_9 - 1)
    
    rax_6 = arg11[1]
else
    int64_t rcx_4 = _Size_1 + 0x1e
    
    if (rcx_4 u<= _Size_1 + 0xf)
        rcx_4 = 0xffffffffffffff0
    
    int64_t rcx_5 = rcx_4 & 0xfffffffffffffff0
    __chkstk(rcx_5)
    rsp_1 -= rcx_5
    r13 = (rsp_1 + 0x6f) & 0xfffffffffffffff0
    rax_6 = nullptr

int64_t result_4 = arg1
void* rdx_1 = nullptr
int64_t rcx_8 = rdi
int64_t r9 = rdx
int64_t rbx_1 = rsi

if (rax_6 == 0)
    rdx_1 = r13

if (rcx_8 != result_4 && r9 == r12)
    var_128 = 1

if (rcx_8 == result_4 || r9 != r12 || rbx_1 != arg2)
    var_128 = 0

int64_t result = 0
int64_t result_2 = 0

if (result_4 s> 0)
    int64_t rdx_2 = rcx_8 << 2
    int64_t r8 = arg8
    zmm6 = arg10
    int64_t r11_2 = arg4 - r8
    int64_t var_108_1 = r11_2
    int64_t result_1
    
    do
        result_1 = rcx_8 + result
        int64_t result_3 = result_1
        
        if (result_4 s< result_1)
            result_3 = result_4
        
        int64_t rcx_9 = result_3 - result
        int64_t rax_10 = 0
        int64_t var_f0_1 = rcx_9
        
        if (r12 s> 0)
            int64_t rdi_2 = arg6
            int64_t var_70_1 = arg5
            int64_t rdx_5 = (r9 * arg5) << 2
            int64_t rdx_6 = r11_2 + r8
            int64_t var_f8_1 = rdi_2
            int64_t var_100_1 = rdx_6
            
            do
                int64_t r8_1 = rax_10 + r9
                *(rsp_1 + 0x30) = 0
                *(rsp_1 + 0x28) = 0
                int64_t rsi_2 = r8_1
                
                if (r12 s< r8_1)
                    rsi_2 = r12
                
                int64_t var_78 = rdx_6
                int64_t rsi_3 = rsi_2 - rax_10
                *(rsp_1 + 0x20) = rcx_9
                void var_127
                sub_141a93490(&var_127, r14, &var_78, rsi_3)
                int64_t rax_11 = 0
                
                if (arg2 s> 0)
                    int64_t r12_1 = arg8
                    int64_t r14_3 = rdi_2
                    int64_t var_50_1 = arg9
                    int64_t rdx_9 = arg7
                    int64_t rcx_13 = (rbx_1 * arg9) << 2
                    int64_t rcx_16 = (rbx_1 * rdx_9) << 2
                    int64_t rdi_3
                    
                    do
                        rdi_3 = rbx_1 + rax_11
                        int64_t rbx_2 = rdi_3
                        
                        if (arg2 s< rdi_3)
                            rbx_2 = arg2
                        
                        int64_t rbx_3 = rbx_2 - rax_11
                        
                        if (var_128 == 0 || result_2 == 0)
                            *(rsp_1 + 0x30) = 0
                            int64_t var_60_1 = rdx_9
                            *(rsp_1 + 0x28) = 0
                            *(rsp_1 + 0x20) = rbx_3
                            int64_t var_68 = r14_3
                            sub_141a93aa0(&var_127, r13, &var_68, rsi_3)
                        
                        *(rsp_1 + 0x58) = 0
                        *(rsp_1 + 0x50) = 0
                        *(rsp_1 + 0x48) = -1
                        *(rsp_1 + 0x40) = -1
                        *(rsp_1 + 0x38) = zmm6.d
                        *(rsp_1 + 0x30) = rbx_3
                        *(rsp_1 + 0x28) = rsi_3
                        *(rsp_1 + 0x20) = var_f0_1
                        int64_t var_58 = r12_1
                        zmm6 = sub_141a92050(&var_127, &var_58, var_118, r13)
                        r14_3 += rcx_16
                        rax_11 = rdi_3
                        r12_1 += rcx_13
                        rbx_1 = rsi
                        rdx_9 = arg7
                    while (rdi_3 s< arg2)
                    r14 = var_118
                    rdi_2 = var_f8_1
                    r12 = arg3
                
                rdx_6 = var_100_1 + rdx_5
                r9 = rdx
                rax_10 = r8_1
                rbx_1 = rsi
                var_100_1 = rdx_6
                rdi_2 += r9 << 2
                rcx_9 = var_f0_1
                var_f8_1 = rdi_2
            while (rax_10 s< r12)
            
            r8 = arg8
            result_4 = arg1
            r11_2 = var_108_1
        
        r8 += rdx_2
        result = result_1
        rbx_1 = rsi
        rcx_8 = rdi
        result_2 = result_1
        arg8 = r8
    while (result_1 s< result_4)

if (_Size_1 u> 0x20000)
    result = free(rdx_1)

if (_Size u> 0x20000)
    result = free(rax_5)

__security_check_cookie(rax_1 ^ &var_128)
return result
