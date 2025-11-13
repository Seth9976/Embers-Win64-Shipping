// 函数: sub_140a361a0
// 地址: 0x140a361a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbx = zx.d(arg3.b)
uint32_t rax = 0xff
int32_t r15 = arg3

if (rbx != 0xff)
    rax = rbx

if (rax == 0xff)
    uint32_t rcx = zx.d(sub_140a24460(arg1))
    rbx = 0xff
    
    if (rcx != 0xff)
        rbx = rcx
    
    r15 = (r15 s>> 9 & 1) << 9 | (r15 & 0xc00) | rbx
    
    if (rbx == 0xff || rbx s>= *(arg1 + 0x7bc))
        goto label_140a362c2
    
    goto label_140a3621f

uint8_t result

if (rbx != 0xff && rbx s< *(arg1 + 0x7bc))
label_140a3621f:
    uint64_t rax_4 = 0xff
    uint32_t rcx_5 = zx.d(r15.b)
    
    if (rcx_5 != 0xff)
        rax_4 = zx.q(rcx_5)
    
    int32_t r12_3 = r15 s>> 8 & 1
    void* r13_2 = rax_4 * 0x18 + arg1
    int64_t* rcx_7 = *(r13_2 + 8)
    result = (*(*rcx_7 + 0x60))(rcx_7, zx.q(r12_3))
    
    if (result != 0)
        goto label_140a362c2
    
    int32_t rbp_1 = arg2[5].d
    
    if (rbp_1 s>= 8)
    label_140a36326:
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
        
        void*** r14_1 = lpTlsValue[1]
        int32_t rcx_13
        
        if (r14_1 != 0)
            rcx_13 = lpTlsValue[2].d
        else
            void*** rax_10 = *lpTlsValue
            
            if (rax_10 == 0)
                int64_t rax_11 = sub_14059e7c0(&data_143cf0958)
                lpTlsValue[1] = rax_11
                
                if (rax_11 == 0)
                    int64_t* rax_12 = sub_140a82f70(0x2000, 0)
                    lpTlsValue[1] = rax_12
                    int64_t i_1 = 0x1f
                    int64_t* rcx_14
                    int64_t i
                    
                    do
                        rcx_14 = &rax_12[0x20]
                        *rax_12 = rcx_14
                        rax_12 = rcx_14
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                    *rcx_14 = 0
                
                r14_1 = lpTlsValue[1]
                rcx_13 = 0x20
                lpTlsValue[2].d = 0x20
            else
                rcx_13 = 0x20
                lpTlsValue[1] = rax_10
                lpTlsValue[2].d = 0x20
                r14_1 = rax_10
                *lpTlsValue = 0
        
        lpTlsValue[1] = *r14_1
        lpTlsValue[2].d = rcx_13 - 1
        int64_t* var_48
        int64_t** rax_15 = sub_140a228d0(&var_48)
        int64_t* rcx_16 = *rax_15
        *rax_15 = nullptr
        *r14_1 = &data_142d40498
        int64_t* var_38_1 = rcx_16
        r14_1[1].d = 0xff
        *(r14_1 + 0xc) = rbp_1 + 1
        *r14_1 = &data_142d40998
        *(r14_1 + 0x14) = 0
        r14_1[3] = rcx_16
        int64_t* rcx_17 = var_48
        
        if (rcx_17 != 0)
            sub_140a2f7d0(rcx_17)
        
        r14_1[2].d = r15
        int64_t* rbx_1 = r14_1[3]
        
        if (rbx_1 != 0)
            rbx_1[9].d += 1
        
        sub_1405a5db0(r14_1, arg2, r15, 1)
        
        if (rbx_1 != 0)
            sub_140a2f7d0(rbx_1)
        
        int64_t* rcx_20 = *(r13_2 + 8)
        return (*(*rcx_20 + 0x30))(rcx_20, zx.q(r12_3))
    
    int32_t r8 = 0
    
    if (rbp_1 s> 0)
        int64_t r9_1 = 0
        
        while (true)
            int64_t* rax_6 = arg2[4]
            int64_t* rcx_8 = arg2
            
            if (rax_6 != 0)
                rcx_8 = rax_6
            
            int64_t rax_7 = 0
            void* rdx_1 = *(rcx_8 + r9_1)
            
            if (0 == *(rdx_1 + 8))
                *(rdx_1 + 8) = 0
            else
                rax_7 = *(rdx_1 + 8)
            
            rbp_1 = arg2[5].d
            result = (rax_7 u>> 0x1a).b
            
            if ((result & 1) == 0)
                break
            
            r8 += 1
            r9_1 += 8
            
            if (r8 s>= rbp_1)
                return result
        
        goto label_140a36326
else
label_140a362c2:
    result = sub_140a54810()
    
    if (result != 0)
    label_140a364a9:
        int64_t* arg_20
        sub_140a61570(&arg_20)
        sub_140a35a60(arg1, arg_20, arg2, zx.q(rbx), 0x6ff)
        return sub_140a63c60(&arg_20)
    
    int32_t r8_1 = 0
    
    if (arg2[5].d s> 0)
        int64_t r9_2 = 0
        
        while (true)
            int64_t* rax_8 = arg2[4]
            int64_t* rcx_9 = arg2
            
            if (rax_8 != 0)
                rcx_9 = rax_8
            
            int64_t rax_9 = 0
            void* rdx_2 = *(rcx_9 + r9_2)
            
            if (0 == *(rdx_2 + 8))
                *(rdx_2 + 8) = 0
            else
                rax_9 = *(rdx_2 + 8)
            
            result = (rax_9 u>> 0x1a).b
            
            if ((result & 1) == 0)
                break
            
            r8_1 += 1
            r9_2 += 8
            
            if (r8_1 s>= arg2[5].d)
                return result
        
        sub_140af98a0("Unknown", 0x5d8, Recursive waits are not allowed in single threaded mode.", 
            r9_2)
        sub_140afbb40()
        goto label_140a364a9

return result
