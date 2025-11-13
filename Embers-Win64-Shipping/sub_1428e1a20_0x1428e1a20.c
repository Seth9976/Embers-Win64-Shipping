// 函数: sub_1428e1a20
// 地址: 0x1428e1a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
__chkstk(0x50)
void var_68
void* rsp_1 = &var_68
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int32_t var_38
int64_t rax_1 = __security_cookie ^ &var_38
*(arg1 + 0x20)
int64_t r8 = *(arg1 + 0x18)
var_38 = 0
int32_t result_1 = 1
int512_t zmm0
int512_t zmm1
int512_t zmm2
int512_t zmm3
zmm0, zmm1, zmm2, zmm3 = sub_1428df6c0(arg1, "Listing containers CSP=%s, type = %d\n", r8)
uint8_t* lpMultiByteStr = *(arg1 + 0x18)
int32_t var_34
int32_t rax_2

if (lpMultiByteStr != 0)
    rax_2 = MultiByteToWideChar(0, 0, lpMultiByteStr, 0xffffffff, nullptr, 0)
    var_34 = rax_2
    
    if (rax_2 != 0)
        uint64_t rax_4 = zx.q(rax_2) * 2
        int64_t rcx = rax_4 + 0xf
        
        if (rcx u<= rax_4)
            rcx = 0xffffffffffffff0
        
        int64_t rcx_1 = rcx & 0xfffffffffffffff0
        __chkstk(rcx_1)
        *(arg1 + 0x18)
        rsp_1 = &var_68 - rcx_1
        *(rsp_1 + 0x28) = rax_2
        *(rsp_1 + 0x20) = rsp_1 + 0x30
        MultiByteToWideChar(nop)

uint64_t result

if (lpMultiByteStr == 0 || (rax_2 != 0 && rsp_1 != -0x30))
    *(arg1 + 0x20)
    *(rsp_1 + 0x20) = 0xf0000000
    
    if (CryptAcquireContextW(nop) != 0)
        *(rsp_1 + 0x20) = 1
        uint64_t hProv
        
        if (CryptGetProvParam(nop) != 0)
            int512_t zmm1_1
            int512_t zmm2_1
            int512_t zmm3_1
            zmm1_1, zmm2_1, zmm3_1 = sub_1428df6c0(arg1, "Got max container len %d\n", zx.q(var_38))
            int32_t rax_11 = var_38
            
            if (rax_11 == 0)
                rax_11 = 0x400
            
            var_38 = rax_11
            char* rax_12
            int512_t zmm0_1
            rax_12, zmm0_1 = sub_1428a6730(zx.q(rax_11))
            
            if (rax_12 != 0)
                int32_t rbx_1 = 0
                
                while (true)
                    var_34 = var_38
                    *rax_12 = 0
                    int32_t r14
                    r14.b = rbx_1 == 0
                    *(rsp_1 + 0x20) = r14
                    
                    if (CryptGetProvParam(nop) == 0)
                        enum WIN32_ERROR rax_17 = GetLastError()
                        
                        if (rax_17 == ERROR_NO_MORE_ITEMS)
                            goto label_1428e1d64
                        
                        int32_t rax_18 = data_143fecca8
                        
                        if (rax_18 == 0)
                            rax_18 = sub_1428a5060()
                            data_143fecca8 = rax_18
                        
                        *(rsp_1 + 0x20) = 0x4e4
                        sub_1428a5670(zx.q(rax_18), 0x6b, 0x6c, "engines\e_capi.c")
                        sub_1428df780(rax_17)
                        goto label_1428e1d51
                    
                    *(rsp_1 + 0x28) = r14
                    *(rsp_1 + 0x20) = rbx_1
                    int64_t r8_12 = sub_1428df6c0(arg1, 
                        "Container name %s, len=%d, index=%d, flags=%d\n", rax_12)
                    
                    if (*rax_12 == 0 && var_34 == var_38)
                        sub_1428df6c0(arg1, "Enumerate bug: using workaround\n", r8_12)
                        break
                    
                    zmm0_1, zmm1_1, zmm2_1, zmm3_1 = sub_1428b6f70(arg2, "%lu. %s\n", zx.q(rbx_1))
                    rbx_1 += 1
            else
                int32_t rax_13 = data_143fecca8
                
                if (rax_13 == 0)
                    rax_13 = sub_1428a5060()
                    data_143fecca8 = rax_13
                
                *(rsp_1 + 0x20) = 0x4d3
                sub_1428a5670(zx.q(rax_13), 0x6b, 0x41, "engines\e_capi.c")
            label_1428e1d51:
                result_1 = 0
            
        label_1428e1d64:
            sub_1428a6780(rax_12)
            CryptReleaseContext(hProv, 0)
            result = zx.q(result_1)
        else
            int32_t rax_10 = data_143fecca8
            
            if (rax_10 == 0)
                rax_10 = sub_1428a5060()
                data_143fecca8 = rax_10
            
            *(rsp_1 + 0x20) = 0x4c9
            sub_1428a5670(zx.q(rax_10), 0x6b, 0x6c, "engines\e_capi.c")
            sub_1428df7e0()
            CryptReleaseContext(hProv, 0)
            result = 0
    else
        int32_t rax_8 = data_143fecca8
        
        if (rax_8 == 0)
            rax_8 = sub_1428a5060()
            data_143fecca8 = rax_8
        
        *(rsp_1 + 0x20) = 0x4c3
        sub_1428a5670(zx.q(rax_8), 0x6b, 0x68, "engines\e_capi.c")
        sub_1428df7e0()
        result = 0
else
    int32_t rax_6 = data_143fecca8
    
    if (rax_6 == 0)
        rax_6 = sub_1428a5060()
        data_143fecca8 = rax_6
    
    *(rsp_1 + 0x20) = 0x4bb
    sub_1428a5670(zx.q(rax_6), 0x6b, 0x41, "engines\e_capi.c")
    sub_1428df7e0()
    result = 0

__security_check_cookie(rax_1 ^ &var_38)
return result
