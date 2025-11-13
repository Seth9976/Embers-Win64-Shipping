// 函数: sub_140a1dfe0
// 地址: 0x140a1dfe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t* r12 = arg1
arg1.b = 1
int32_t var_f8 = 0
void*** rax_2 = sub_140a491d0(arg1.b)
var_f8 = 0
void* var_98 = nullptr
int32_t i_3 = 0
int32_t var_8c = 4
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
data_143d796f8
var_f8 += *r12
int32_t i = 0
void var_b8

if (*r12 u> 0)
    do
        int64_t (* var_88_1)(int32_t* arg1, int64_t arg2) = sub_140a22170
        uint32_t dwTlsIndex = data_143cf0950
        int64_t rdx
        int64_t var_d0_1 = rdx
        void*** var_78_1 = nullptr
        void** const var_68 = &data_142d42ed8
        int128_t var_60_1 = i.o
        void** lpTlsValue_1 = TlsGetValue(dwTlsIndex)
        void** lpTlsValue = lpTlsValue_1
        
        if (lpTlsValue_1 == 0)
            void** lpTlsValue_2 = j_sub_140a82f30(zx.q((&lpTlsValue_1[3]).d))
            lpTlsValue = lpTlsValue_2
            
            if (lpTlsValue_2 == 0)
                lpTlsValue = nullptr
            else
                __builtin_memset(lpTlsValue_2, 0, 0x14)
            
            TlsSetValue(data_143cf0950, lpTlsValue)
        
        int64_t* rdi_1 = lpTlsValue[1]
        int32_t rcx_5
        
        if (rdi_1 != 0)
            rcx_5 = lpTlsValue[2].d
        else
            rdi_1 = *lpTlsValue
            
            if (rdi_1 == 0)
                int32_t rax_3 = sub_140a2d3e0(&data_143cf0958)
                rdi_1 = nullptr
                
                if (rax_3 != 0)
                    rdi_1 = *(*(&data_143cf0bf8 + (zx.q(rax_3) u>> 0xe << 3))
                        + (zx.q(rax_3) & 0x3fff) * 0x18 + 8)
                    sub_140a24050(rax_3)
                
                lpTlsValue[1] = rdi_1
                
                if (rdi_1 == 0)
                    int64_t* rax_4 = sub_140a82f70(0x2000, 0)
                    lpTlsValue[1] = rax_4
                    int64_t j_1 = 0x1f
                    int64_t* rcx_10
                    int64_t j
                    
                    do
                        rcx_10 = &rax_4[0x20]
                        *rax_4 = rcx_10
                        rax_4 = rcx_10
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    *rcx_10 = j_1
                    rdi_1 = lpTlsValue[1]
                
                lpTlsValue[2].d = 0x20
                rcx_5 = 0x20
            else
                lpTlsValue[1] = rdi_1
                rcx_5 = 0x20
                *lpTlsValue = nullptr
                lpTlsValue[2].d = 0x20
        
        lpTlsValue[1] = *rdi_1
        lpTlsValue[2].d = rcx_5 - 1
        int64_t* var_e8
        int64_t** rax_7
        int64_t zmm6_1
        rax_7, zmm6_1 = sub_140a228d0(&var_e8)
        int64_t* rcx_12 = *rax_7
        *rax_7 = nullptr
        *rdi_1 = &data_142d40498
        int64_t* var_c8_1 = rcx_12
        rdi_1[1].d = 0xff
        *(rdi_1 + 0xc) = 1
        *rdi_1 = &data_142e51ac8
        rdi_1[0x10].b = 0
        rdi_1[0x11] = rcx_12
        int64_t* rcx_13 = var_e8
        
        if (rcx_13 != 0)
            zmm6_1 = sub_140a2f7d0(rcx_13)
        
        rdi_1[2] = var_88_1
        rdi_1[4] = 0
        
        if (rdi_1[2] != 0)
            void*** rcx_15 = &var_68
            
            if (var_78_1 != 0)
                rcx_15 = var_78_1
            
            (**rcx_15)(rcx_15)
        
        rdi_1[0xe] = zmm6_1
        rdi_1[0xb] = &var_f8
        rdi_1[0xf] = u"TestLockFreeWorker"
        rdi_1[0xa].d = 0x2ff
        rdi_1[0xc] = 0
        rdi_1[0xd] = rax_2
        void* rbx_1 = rdi_1[0x11]
        
        if (rbx_1 != 0)
            *(rbx_1 + 0x48) += 1
        
        sub_140a31da0(rdi_1, nullptr, 0xff, 1)
        int64_t i_5 = sx.q(i_3)
        int32_t i_4 = (i_5 + 1).d
        i_3 = i_4
        
        if (i_4 s> var_8c)
            sub_14083a490(&var_b8, i_5.d)
        
        void* rcx_18 = &var_b8
        
        if (var_98 != 0)
            rcx_18 = var_98
        
        *(rcx_18 + (i_5 << 3)) = rbx_1
        
        if (var_88_1 != 0)
            void** const* rcx_19 = &var_68
            
            if (var_78_1 != 0)
                rcx_19 = var_78_1
            
            (*rcx_19)[2](rcx_19)
        
        i += 1
    while (i u< *r12)

(*rax_2)[4](rax_2, 0xffffffff, 0)
uint64_t result = sub_140a4fc50(rax_2)
void* rcx_22 = var_98
void* rbx_2 = &var_b8
int32_t i_2 = i_3

if (rcx_22 != 0)
    rbx_2 = rcx_22

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t* rcx_23 = *rbx_2
        
        if (rcx_23 != 0)
            result = sub_140a2f7d0(rcx_23)
        
        rbx_2 += 8
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    rcx_22 = var_98

if (rcx_22 != 0)
    result = sub_140a74f90(rcx_22)

__security_check_cookie(rax_1 ^ &var_118)
return result
