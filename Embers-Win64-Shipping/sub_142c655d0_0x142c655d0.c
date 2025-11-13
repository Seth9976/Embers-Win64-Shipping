// 函数: sub_142c655d0
// 地址: 0x142c655d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
void* r13 = *arg1
uint32_t iError = 0
int64_t rax_2 = sx.q(arg2)
*arg3 = 0
int32_t var_d0 = rax_2.d
int32_t result_2 = 0
enum WSA_ERROR optval = WSA_WAIT_EVENT_0
int32_t result

if (*(rax_2 + arg1 + 0x3fd) == 0)
    int128_t var_a8
    uint64_t* rax_3 = sub_142c59600(&var_a8)
    int64_t r8 = sx.q(*(r13 + 0x380))
    int64_t rdx = sx.q(*(r13 + 0x384))
    int64_t rsi_1 = 0x493e0
    int32_t rcx_1
    rcx_1.b = r8.d s> 0
    
    if (rdx.d s> 0)
        rcx_1 |= 2
    
    if (rcx_1 == 1)
        rsi_1 = r8
    else if (rcx_1 == 2)
        rsi_1 = rdx
    else if (rcx_1 == 3)
        if (r8.d s< rdx.d)
            rdx = zx.q(r8.d)
        
        rsi_1 = sx.q(rdx.d)
    
    int128_t zmm0 = *(r13 + 0x950)
    int128_t var_b8 = *rax_3
    int128_t var_c8 = zmm0
    int64_t rax_4
    int64_t r8_1
    rax_4, r8_1 = sub_142c595d0(&var_b8, &var_c8)
    int64_t rsi_2 = rsi_1 - rax_4
    var_c8.q = rsi_2
    
    if (rsi_2 s> 0)
        int32_t r14_1 = 0
        void* r15_1 = &arg1[0x49]
        
        while (true)
            SOCKET r8_2 = *r15_1
            int32_t r12_2 = r14_1 ^ 1
            int32_t result_1
            
            if (r8_2 == -1)
            label_142c658ff:
                result_1 = result_2
            label_142c65903:
                r14_1 += 1
                r15_1 += 8
                
                if (r14_1 s< 2)
                    continue
                else
                    if (result_1 == 0)
                        result = result_1
                        break
                    
                    int32_t result_4
                    
                    if (arg1[0x10] == 0)
                        result_4, arg4 = sub_142c66b60(arg1, var_d0, 1, arg4)
                        result_1 = result_4
                    
                    if (arg1[0x10] != 0 || result_4 != 0)
                        int64_t rsi_4
                        
                        if (*(arg1 + 0x3f7) != 0)
                            rsi_4 = arg1[0x23]
                        else if (*(arg1 + 0x3f6) != 0)
                            rsi_4 = arg1[0x2a]
                        else if (*(arg1 + 0x3f3) == 0)
                            rsi_4 = arg1[0x1a]
                        else
                            rsi_4 = arg1[0x1f]
                        
                        char* rax_18
                        int512_t zmm2_4
                        rax_18, zmm2_4 = sub_142c55790(arg1, iError, arg4)
                        arg1[0x2f].d
                        char* var_e8_3 = rax_18
                        sub_142c64760(r13, "Failed to connect to %s port %ld: %s", rsi_4, zmm2_4)
                        result = result_1
                        break
            else
                int32_t rax_5
                int128_t zmm6_1
                rax_5, zmm6_1 = sub_142c64080(-1, -1, r8_2, 0)
                
                if (rax_5 == 0)
                    int128_t zmm0_1 = *(arg1 + 0x418)
                    int64_t rsi_3 = arg1[0x86]
                    iError = 0
                    var_a8 = zmm6_1
                    var_b8 = zmm0_1
                    optval = WSA_WAIT_EVENT_0
                    
                    if (sub_142c595d0(&var_a8, &var_b8) s>= rsi_3)
                        arg4, zmm6_1 =
                            sub_142c64850(r13, "After %ldms connect time, move on!\n", rsi_3, arg4)
                        iError = 0x274c
                        optval = WSAETIMEDOUT
                    
                    if (r14_1 == 0 && arg1[0x10] == 0)
                        zmm0_1 = *(arg1 + 0x418)
                        var_b8 = zmm6_1
                        var_a8 = zmm0_1
                        
                        if (sub_142c595d0(&var_b8, &var_a8) s>= 0xc8)
                            arg4 = sub_142c66b60(arg1, var_d0, r14_1 + 1, arg4)
                    
                    rsi_2 = var_c8.q
                    goto label_142c657aa
                
                if (rax_5 != 2 && *(arg1 + 0x40e) == 0)
                    if ((rax_5.b & 4) != 0)
                        sub_142c66c70(*r15_1, &optval)
                        iError = optval
                    
                    goto label_142c657aa
                
                SOCKET s = *r15_1
                optval = WSA_WAIT_EVENT_0
                int32_t optlen = 4
                SleepEx(0, 0)
                uint32_t iError_1
                int64_t r8_7
                iError_1, r8_7 = getsockopt(s, 0xffff, 0x1007, &optval, &optlen)
                
                if (iError_1 == 0)
                    iError = optval
                else
                    iError_1, r8_7 = WSAGetLastError()
                    iError = iError_1
                
                if (iError == 0 || iError == 0x2748)
                    iError_1.b = 1
                else
                    iError_1.b = 0
                
                optval = iError
                
                if (iError_1.b == 0)
                    arg4 = sub_142c64850(r13, "Connection failed\n", r8_7, arg4)
                label_142c657aa:
                    
                    if (iError == 0)
                        goto label_142c658ff
                    
                    *(r13 + 0x4b14) = iError
                    WSASetLastError(iError)
                    void* rcx_11 = *(r15_1 - 0x1d0)
                    
                    if (rcx_11 == 0)
                        goto label_142c658ff
                    
                    void var_88
                    char* rax_8
                    int512_t zmm2_1
                    rax_8, zmm2_1 =
                        sub_142c55790(arg1, iError, sub_142c5a530(rcx_11, &var_88, 0x2e, arg4))
                    arg1[0x2f].d
                    char* var_e8_1 = rax_8
                    int512_t zmm2_2 =
                        sub_142c64850(r13, "connect to %s port %ld failed: %s\n", &var_88, zmm2_1)
                    int64_t rax_10 = rsi_2
                    
                    if (*(*(r15_1 - 0x1d0) + 0x28) != 0)
                        int64_t rax_11
                        int64_t rdx_7
                        rdx_7:rax_11 = sx.o(rax_10)
                        rax_10 = (rax_11 - rdx_7) s>> 1
                    
                    arg1[0x86] = rax_10
                    int32_t result_3
                    result_3, arg4 = sub_142c66b60(arg1, var_d0, r14_1, zmm2_2)
                    
                    if (result_3 == 7 && arg1[sx.q(r12_2) + 0x49] != -1)
                        goto label_142c658ff
                    
                    result_1 = result_3
                    result_2 = result_3
                    goto label_142c65903
                
                int64_t rcx_20 = sx.q(r14_1)
                arg1[rax_2 + 0x47] = arg1[rcx_20 + 0x49]
                arg1[0xe] = arg1[rcx_20 + 0xf]
                arg1[rcx_20 + 0x49] = -1
                void* rdi = &arg1[sx.q(r12_2)]
                SOCKET rdx_11 = *(rdi + 0x248)
                
                if (rdx_11 != -1)
                    sub_142c65200(arg1, rdx_11)
                    *(rdi + 0x248) = -1
                
                int512_t zmm2_3
                result, zmm2_3 = sub_142c5c840(arg1, rax_2.d, arg4)
                
                if (result != 0)
                    break
                
                *(rax_2 + arg1 + 0x3fd) = 1
                *arg3 = 1
                
                if (rax_2.d == 0)
                    sub_142c6f300(r13, (rax_2 + 4).d)
                
                sub_142c65ed0(arg1, arg1[rax_2 + 0x47], zmm2_3)
                sub_142c5f4c0(arg1)
            result = 0
            break
    else
        sub_142c64760(r13, "Connection time-out", r8_1, arg4)
        result = 0x1c
else
    *arg3 = 1
    result = 0

__security_check_cookie(rax_1 ^ &var_108)
return result
