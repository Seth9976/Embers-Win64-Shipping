// 函数: sub_142c65ed0
// 地址: 0x142c65ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t result = __security_cookie ^ &var_158
int64_t result_1 = result
void* rbp = *arg1

if (*(arg1 + 0xbc) != 2)
    if (*(arg1 + 0x3f2) != 0 || *(arg1 + 0x40e) != 0)
        result = sub_142c65aa0(arg1)
    else
        int32_t namelen[0x4]
        namelen[0] = 0x80
        void name_1
        
        if (getpeername(arg2, &name_1, &namelen) == 0)
            namelen[0] = 0x80
            void name
            memset(&name, 0, 0x80)
            
            if (getsockname(arg2, &name, &namelen) == 0)
                char rax_7
                int512_t zmm2_2
                rax_7, zmm2_2 = sub_142c665f0(&name_1, arg1 + 0x186, arg1 + 0x1b4, arg3)
                
                if (rax_7 != 0)
                    int32_t rax_11 = *(arg1 + 0x1ae)
                    int128_t zmm1 = *(arg1 + 0x196)
                    *(arg1 + 0x88) = *(arg1 + 0x186)
                    uint128_t zmm0_1 = zx.o(*(arg1 + 0x1a6))
                    *(arg1 + 0x98) = zmm1
                    arg1[0x15] = zmm0_1.q
                    arg1[0x16].d = rax_11
                    *(arg1 + 0xb4) = *(arg1 + 0x1b2)
                    char rax_13
                    int512_t zmm2_4
                    rax_13, zmm2_4 = sub_142c665f0(&name, &arg1[0x37], &arg1[0x3d], zmm2_2)
                    
                    if (rax_13 != 0)
                        result = sub_142c65aa0(arg1)
                    else
                        uint32_t* rbx_5 = _errno()
                        int32_t* rax_15 = _errno()
                        char* rax_16
                        int512_t zmm2_5
                        rax_16, zmm2_5 = sub_142c55790(arg1, *rbx_5, zmm2_4)
                        result = sub_142c64760(rbp, "ssloc inet_ntop() failed with errno %d: %s", 
                            zx.q(*rax_15), zmm2_5)
                else
                    int32_t* rax_8 = _errno()
                    int32_t* rax_9 = _errno()
                    char* rax_10
                    int512_t zmm2_3
                    rax_10, zmm2_3 = sub_142c55790(arg1, *rax_8, zmm2_2)
                    result = sub_142c64760(rbp, "ssrem inet_ntop() failed with errno %d: %s", 
                        zx.q(*rax_9), zmm2_3)
            else
                enum WSA_ERROR rax_5 = WSAGetLastError()
                char* rax_6
                int512_t zmm2_1
                rax_6, zmm2_1 = sub_142c55790(arg1, rax_5, arg3)
                result = sub_142c64760(rbp, "getsockname() failed with errno %d: %s", zx.q(rax_5), 
                    zmm2_1)
        else
            enum WSA_ERROR rax_2 = WSAGetLastError()
            char* rax_3
            int512_t zmm2
            rax_3, zmm2 = sub_142c55790(arg1, rax_2, arg3)
            result = sub_142c64760(rbp, "getpeername() failed with errno %d: %s", zx.q(rax_2), zmm2)

__security_check_cookie(result_1 ^ &var_158)
return result
