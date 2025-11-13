// 函数: sub_140cb0ed0
// 地址: 0x140cb0ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
uint64_t result = __security_cookie ^ &var_d8
uint64_t result_1 = result
int32_t rsi = 0
int32_t var_b4 = 0
void* r15 = arg1

if (arg2[1].d != 0)
    void* var_58_1 = nullptr
    int32_t i_6 = 0
    int32_t var_4c_1 = 4
    int64_t* rax_1 = sub_140a242a0()
    int64_t rdx = *rax_1
    int32_t rax_2 = (*(rdx + 0x18))(rax_1, rdx)
    int32_t rcx_1 = 0
    var_b4 = 0xff
    
    if (data_14399e5c8 != 0)
        rcx_1 = rax_2
    
    int32_t var_a8 = 0x8ff
    void var_78
    void* rbx_1 = &var_78
    int32_t r12_2 = rcx_1 + rax_2
    int32_t i_4 = i_6
    
    if (var_58_1 != 0)
        rbx_1 = var_58_1
    
    if (i_4 != 0)
        int32_t i
        
        do
            int64_t* rcx_2 = *rbx_1
            
            if (rcx_2 != 0)
                rcx_2[9].d -= 1
                
                if (rcx_2[9].d == 1)
                    sub_140a2f6e0(rcx_2)
            
            rbx_1 += 8
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    int32_t i_7 = 0
    
    if (var_4c_1 != r12_2)
        sub_14085a940(&var_78, r12_2)
    
    int32_t rdi_1 = 0
    int32_t rbx_2 = divs.dp.d(sx.q(arg2[1].d), r12_2)
    
    if (r12_2 s> 0)
        do
            rdi_1 += 1
            
            if (rdi_1 == r12_2)
                rbx_2 = arg2[1].d - rsi
            
            sub_140cb0210(r15 + 0x10, arg2, rsi, rbx_2)
            rsi += rbx_2
        while (rdi_1 s< r12_2)
    
    int32_t r14_1 = 0
    
    if (r12_2 s> 0)
        do
            int32_t* r15_1 = &var_a8
            
            if (r14_1 s< rax_2)
                r15_1 = &var_b4
            
            int64_t* lpTlsValue_1 = TlsGetValue(data_143cf0950)
            int64_t* lpTlsValue = lpTlsValue_1
            
            if (lpTlsValue_1 == 0)
                int64_t* lpTlsValue_2 = j_sub_140a82f30(zx.q((&lpTlsValue_1[3]).d))
                lpTlsValue = lpTlsValue_2
                
                if (lpTlsValue_2 == 0)
                    lpTlsValue = nullptr
                else
                    __builtin_memset(lpTlsValue_2, 0, 0x14)
                
                TlsSetValue(data_143cf0950, lpTlsValue)
            
            void*** rdi_2 = lpTlsValue[1]
            int32_t rcx_8
            
            if (rdi_2 != 0)
                rcx_8 = lpTlsValue[2].d
            else
                rdi_2 = *lpTlsValue
                
                if (rdi_2 == 0)
                    int32_t rax_8 = sub_140a2d3e0(&data_143cf0958)
                    rdi_2 = nullptr
                    
                    if (rax_8 != 0)
                        rdi_2 = *(*(&data_143cf0bf8 + (zx.q(rax_8) u>> 0xe << 3))
                            + (zx.q(rax_8) & 0x3fff) * 0x18 + 8)
                        sub_140a24050(rax_8)
                    
                    lpTlsValue[1] = rdi_2
                    
                    if (rdi_2 == 0)
                        int64_t* rax_9 = sub_140a82f70(0x2000, 0)
                        lpTlsValue[1] = rax_9
                        int64_t i_3 = 0x1f
                        int64_t* rcx_13
                        int64_t i_1
                        
                        do
                            rcx_13 = &rax_9[0x20]
                            *rax_9 = rcx_13
                            rax_9 = rcx_13
                            i_1 = i_3
                            i_3 -= 1
                        while (i_1 != 1)
                        *rcx_13 = i_3
                        rdi_2 = lpTlsValue[1]
                    
                    lpTlsValue[2].d = 0x20
                    rcx_8 = 0x20
                else
                    lpTlsValue[1] = rdi_2
                    rcx_8 = 0x20
                    *lpTlsValue = 0
                    lpTlsValue[2].d = 0x20
            
            lpTlsValue[1] = *rdi_2
            lpTlsValue[2].d = rcx_8 - 1
            int64_t* var_98
            int64_t** rax_12 = sub_140a228d0(&var_98)
            int64_t* rcx_15 = *rax_12
            *rax_12 = nullptr
            *rdi_2 = &data_142d40498
            int64_t* var_80_1 = rcx_15
            rdi_2[1].d = 0xff
            *(rdi_2 + 0xc) = 1
            *rdi_2 = &data_142ea1768
            rdi_2[4].b = 0
            rdi_2[5] = rcx_15
            int64_t* rcx_16 = var_98
            
            if (rcx_16 != 0)
                rcx_16[9].d -= 1
                
                if (rcx_16[9].d == 1)
                    sub_140a2f6e0(rcx_16)
            
            r15 = arg1
            rdi_2[3].d = *r15_1
            rdi_2[2] = r15 + 0x10
            void* rbx_4 = rdi_2[5]
            
            if (rbx_4 != 0)
                *(rbx_4 + 0x48) += 1
            
            sub_140ccf5b0(rdi_2, nullptr, 0xff, 1)
            int64_t i_9 = sx.q(i_7)
            int32_t i_8 = (i_9 + 1).d
            i_7 = i_8
            
            if (i_8 s> var_4c_1)
                sub_14083a490(&var_78, i_9.d)
            
            void* rcx_22 = &var_78
            
            if (var_58_1 != 0)
                rcx_22 = var_58_1
            
            r14_1 += 1
            *(rcx_22 + (i_9 << 3)) = rbx_4
        while (r14_1 s< r12_2)
    
    int64_t* rax_17 = sub_140a242a0()
    int64_t r9_3 = *rax_17
    (*(r9_3 + 0x48))(rax_17, &var_78, 0x102, r9_3, rax_2)
    result = EnterCriticalSection(r15 + 0xa8)
    
    if (r15 != -0xa8)
        result = LeaveCriticalSection(r15 + 0xa8)
    
    void* rcx_27 = var_58_1
    void* rbx_6 = &var_78
    int32_t i_5 = i_7
    
    if (rcx_27 != 0)
        rbx_6 = rcx_27
    
    if (i_5 != 0)
        int32_t i_2
        
        do
            int64_t* rcx_26 = *rbx_6
            
            if (rcx_26 != 0)
                result = zx.q(rcx_26[9].d)
                rcx_26[9].d -= 1
                
                if (result.d == 1)
                    result = sub_140a2f6e0(rcx_26)
            
            rbx_6 += 8
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
        rcx_27 = var_58_1
    
    if (rcx_27 != 0)
        result = sub_140a74f90(rcx_27)

__security_check_cookie(result_1 ^ &var_d8)
return result
