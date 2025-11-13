// 函数: sub_142c85f60
// 地址: 0x142c85f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
char const* const rsi = "netascii"
int64_t rdi = 0
int32_t result_1 = 0
void* rbp = **(arg1 + 0x10)

if (*(rbp + 0x5db) == 0)
    rsi = "octet"

int32_t result

switch (arg2)
    case 0, 7
        arg1[8] += 1
        
        if (arg1[8] s<= arg1[0xa])
            if (*(rbp + 0x5e9) == 0)
                int32_t i = 0
                int64_t rdx_3 = 0
                
                do
                    rdx_3 += 1
                    *(rdx_3 + *(arg1 + 0x170) - 1) = i.b
                    i += 1
                while (i s< 2)
            else
                **(arg1 + 0x170) = 0
                *(*(arg1 + 0x170) + 1) = 2
                *(**(arg1 + 0x10) + 0x240) = *(arg1 + 0x170) + 4
                int64_t rdx_2 = *(rbp + 0x4e68)
                
                if (rdx_2 != -1)
                    sub_142c6f270(rbp, rdx_2)
            
            char* var_78
            int64_t r8
            result, r8 = sub_142c51e30(rbp, *(**(arg1 + 0x10) + 0x4e38) + 1, 0, &var_78, nullptr, 0)
            
            if (result == 0)
                int64_t rdx_6 = sx.q(arg1[0x57])
                int64_t rax_10 = -1
                
                do
                    rax_10 += 1
                while (rsi[rax_10] != 0)
                
                char* r9_2 = var_78
                int64_t rax_11 = -1
                
                do
                    rax_11 += 1
                while (r9_2[rax_11] != 0)
                
                if (rax_11 u<= rdx_6 - rax_10 - 4)
                    int64_t var_88_1 = 0
                    char tolen
                    tolen.q = rsi
                    int64_t var_98_2 = 0
                    int512_t zmm2 =
                        sub_142c564b0(*(arg1 + 0x170) + 2, rdx_6, "%s%c%s%c", r9_2, arg4)
                    int64_t rcx_12 = -1
                    
                    do
                        rcx_12 += 1
                    while (rsi[rcx_12] != 0)
                    
                    int64_t rax_12 = -1
                    bool cond:0_1
                    
                    do
                        cond:0_1 = var_78[rax_12 + 1] != 0
                        rax_12 += 1
                    while (cond:0_1)
                    int64_t rsi_2 = rax_12 + 4 + rcx_12
                    
                    if (*(rbp + 0x394) == 0)
                        int64_t r9_3
                        
                        if (*(rbp + 0x5e9) != 0)
                            r9_3 = *(rbp + 0x4e68)
                        
                        int16_t var_68
                        
                        if (*(rbp + 0x5e9) == 0 || r9_3 == -1)
                            var_68 = 0x30
                        else
                            zmm2 = sub_142c564b0(&var_68, 0x40, "%I64d", r9_3, zmm2)
                        
                        int64_t rsi_3 =
                            rsi_2 + sub_142c856a0(arg1, rsi_2, *(arg1 + 0x170) + rsi_2, "tsize")
                        int64_t rax_14 = -1
                        bool cond:1_1
                        
                        do
                            cond:1_1 = *(&var_68:1 + rax_14) != 0
                            rax_14 += 1
                        while (cond:1_1)
                        int64_t rax_16
                        
                        if (rax_14 + 1 + rsi_3 u<= sx.q(arg1[0x57]))
                            int16_t* rcx_17 = &var_68
                            char* rdx_10 = *(arg1 + 0x170) + rsi_3
                            char i_1
                            
                            do
                                i_1 = *rcx_17
                                rcx_17 += 1
                                *rdx_10 = i_1
                                rdx_10 = &rdx_10[1]
                            while (i_1 != 0)
                            int64_t rax_17 = -1
                            
                            do
                                rax_17 += 1
                            while (*(&var_68 + rax_17) != 0)
                            
                            rax_16 = rax_17 + 1
                        else
                            rax_16 = 0
                        
                        int64_t rsi_4 = rsi_3 + rax_16
                        int512_t zmm2_1 = sub_142c564b0(&var_68, 0x40, "%d", zx.q(arg1[0x58]), zmm2)
                        int64_t rsi_5 =
                            rsi_4 + sub_142c856a0(arg1, rsi_4, *(arg1 + 0x170) + rsi_4, "blksize")
                        int64_t rax_19 = -1
                        bool cond:2_1
                        
                        do
                            cond:2_1 = *(&var_68:1 + rax_19) != 0
                            rax_19 += 1
                        while (cond:2_1)
                        int64_t rax_21
                        
                        if (rax_19 + 1 + rsi_5 u<= sx.q(arg1[0x57]))
                            int16_t* rcx_22 = &var_68
                            char* rdx_13 = *(arg1 + 0x170) + rsi_5
                            char i_2
                            
                            do
                                i_2 = *rcx_22
                                rcx_22 += 1
                                *rdx_13 = i_2
                                rdx_13 = &rdx_13[1]
                            while (i_2 != 0)
                            int64_t rax_22 = -1
                            
                            do
                                rax_22 += 1
                            while (*(&var_68 + rax_22) != 0)
                            
                            rax_21 = rax_22 + 1
                        else
                            rax_21 = 0
                        
                        int64_t rsi_6 = rsi_5 + rax_21
                        zmm2 = sub_142c564b0(&var_68, 0x40, "%d", zx.q(arg1[9]), zmm2_1)
                        int64_t rsi_7 =
                            rsi_6 + sub_142c856a0(arg1, rsi_6, *(arg1 + 0x170) + rsi_6, "timeout")
                        int64_t rax_24 = -1
                        
                        do
                            rax_24 += 1
                        while (*(&var_68 + rax_24) != 0)
                        
                        if (rsi_7 + 1 + rax_24 u<= sx.q(arg1[0x57]))
                            int16_t* rcx_27 = &var_68
                            char* rdx_16 = *(arg1 + 0x170) + rsi_7
                            char i_3
                            
                            do
                                i_3 = *rcx_27
                                rcx_27 += 1
                                *rdx_16 = i_3
                                rdx_16 = &rdx_16[1]
                            while (i_3 != 0)
                            int64_t rdi_1 = -1
                            
                            do
                                rdi_1 += 1
                            while (*(&var_68 + rdi_1) != 0)
                            
                            rdi = rdi_1 + 1
                        
                        rsi_2 = rsi_7 + rdi
                    
                    void* rcx_28 = *(*(arg1 + 0x10) + 0x70)
                    tolen.d = *(rcx_28 + 0x10)
                    
                    if (sx.q(sendto(*(arg1 + 0x18), *(arg1 + 0x170), rsi_2.d, 0, *(rcx_28 + 0x20), 
                            tolen)) != rsi_2)
                        enum WSA_ERROR rax_30 = WSAGetLastError()
                        char* rax_31
                        int512_t zmm2_2
                        rax_31, zmm2_2 = sub_142c55790(*(arg1 + 0x10), rax_30, zmm2)
                        sub_142c64760(rbp, "%s", rax_31, zmm2_2)
                    
                    data_143ccb8a0(var_78)
                    result = result
                else
                    sub_142c64760(rbp, "TFTP file name too long\n", r8, arg4)
                    result = 0x47
        else
            arg1[2] = 0xffffff9e
            result = 0
            *arg1 = 3
    case 3
        result = sub_142c85600(arg1, 3, arg4)
    case 4
        result = sub_142c85650(arg1, 4, arg4)
    case 5
        *arg1 = 3
        result = result_1
    case 6
        if (*(rbp + 0x5e9) == 0)
            result = sub_142c85600(arg1, 6, arg4)
        else
            result = sub_142c85650(arg1, 6, arg4)
    default
        sub_142c64760(rbp, "tftp_send_first: internal error", arg3, arg4)
        result = result_1

__security_check_cookie(rax_1 ^ &var_b8)
return result
