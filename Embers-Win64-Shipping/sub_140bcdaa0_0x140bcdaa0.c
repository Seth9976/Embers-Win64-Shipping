// 函数: sub_140bcdaa0
// 地址: 0x140bcdaa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t result_1 = 2
char* rdi = arg2
int32_t result_2 = 2
int32_t var_a8 = *(arg1 + 0xc00450)
EnterCriticalSection(arg1 + 0x98)
int64_t* r15 = nullptr
int32_t result_3

if (*(arg1 + 0x90) != 0)
    int64_t r15_1 = sx.q(*(arg1 + 0x90))
    
    if (r15_1.d != 0)
        int32_t rax_3 = *(arg1 + 0xc8)
        int32_t rdx = rax_3 + r15_1.d
        
        if (rdx s> *(arg1 + 0xcc))
            sub_1405c5570(arg1 + 0xc0, rdx)
            rax_3 = *(arg1 + 0xc8)
        
        memcpy(*(arg1 + 0xc0) + (sx.q(rax_3) << 3), *(arg1 + 0x88), (r15_1 << 3).d)
        *(arg1 + 0xc8) += r15_1.d
    
    result_3 = *(arg1 + 0x94)
    r15 = nullptr
    *(arg1 + 0x90) = 0
    
    if (result_3 s<= 0xffffffff)
        sub_1405c5570(arg1 + 0x88, 0)
    
    rdi = arg2

if (arg1 != -0x98)
    LeaveCriticalSection(arg1 + 0x98)

if (*(arg1 + 0x35) != 0 && data_14399e5dc == 2)
    int64_t* rax_5 = sub_140a242a0()
    int64_t r8_2 = *rax_5
    
    if ((*(r8_2 + 0x20))(rax_5, 2, r8_2).b == 0)
        int64_t* rax_6 = sub_140a242a0()
        int64_t r8_3 = *rax_6
        (*(r8_3 + 0x30))(rax_6, 2, r8_3)
        TlsGetValue(data_143e1a81c)

result_3.b = *(arg1 + 0xc8) s> 0
*rdi = result_3.b

if (*(arg1 + 0xc8) s> 0)
    do
        bool z_1
        
        if (0 == *(arg1 + 0x19))
            *(arg1 + 0x19) = 0
            z_1 = true
        else
            result_3.b = *(arg1 + 0x19)
            z_1 = false
        
        if (not(z_1))
            result_1 = result_2
            break
        
        void* rsi_1 = **(arg1 + 0xc0)
        result_3 = sub_140bccad0(rsi_1)
        result_2 = result_3
        result_1 = result_3
        
        if (result_3 != 2)
            break
        
        EnterCriticalSection(arg1 + 0xe0)
        int32_t var_b0 = *(rsi_1 + 0x14)
        sub_140bce990(arg1 + 0x108, &var_b0)
        int64_t* r9_1 = *(rsi_1 + 0xb8)
        int64_t rdi_2 = 0
        uint64_t r15_3 = sx.q(*(rsi_1 + 0xc0)) << 3 u>> 3
        
        if (r9_1 u> &r9_1[sx.q(*(rsi_1 + 0xc0))])
            r15_3 = 0
        
        if (r15_3 != 0)
            do
                int32_t r10_1 = data_143e1d9b4
                int64_t r11_1 = data_143e1d9a0
                int32_t rax_11 = *(*r9_1 + 0xc)
                void* const r8_5
                
                if (rax_11 s>= r10_1)
                    r8_5 = nullptr
                else
                    uint32_t rdx_4 = zx.d(rax_11.w)
                    int32_t rcx_12 = rax_11
                    
                    if (rax_11 s< 0)
                        rcx_12 = rax_11 + 0xffff
                        rdx_4 -= 0x10000
                    
                    r8_5 = *(r11_1 + (sx.q(rcx_12 s>> 0x10) << 3)) + sx.q(rdx_4) * 0x18
                
                int32_t rcx_16 = *(r8_5 + 8)
                int32_t rdx_9 = (rcx_16 u>> 0x1b & 1) << 0x1b
                int32_t r8_7 = rdx_9 | 0x4000000
                
                if ((not.b((rcx_16 u>> 0x1a).b) & 1) != 0)
                    r8_7 = rdx_9
                
                void* const rdx_11
                
                if (rax_11 s>= r10_1)
                    rdx_11 = nullptr
                else
                    uint32_t rcx_18 = zx.d(rax_11.w)
                    
                    if (rax_11 s< 0)
                        rax_11 += 0xffff
                        rcx_18 -= 0x10000
                    
                    rdx_11 = *(r11_1 + (sx.q(rax_11 s>> 0x10) << 3)) + sx.q(rcx_18) * 0x18
                
                r9_1 = &r9_1[1]
                *(rdx_11 + 8) &= not.d(r8_7)
                rdi_2 += 1
            while (rdi_2 != r15_3)
        
        r15 = nullptr
        *(rsi_1 + 0xc0) = 0
        
        if (*(rsi_1 + 0xc4) != 0)
            sub_1405c5570(rsi_1 + 0xb8, 0)
        
        if (arg1 != -0xe0)
            LeaveCriticalSection(arg1 + 0xe0)
        
        int32_t rax_15 = *(arg1 + 0xc8)
        
        if (rax_15 != 1)
            int64_t rcx_22 = *(arg1 + 0xc0)
            memmove(rcx_22, rcx_22 + 8, (rax_15 - 1) << 3)
            rax_15 = *(arg1 + 0xc8)
        
        *(arg1 + 0xc8) = rax_15 - 1
        int64_t r9_2 = sub_1405c53d0(arg1 + 0xc0)
        int32_t rax_17 = *(arg1 + 0x1f4)
        *(arg1 + 0x1f4) -= 1
        
        if (rax_17 - 1 s< 0)
            sub_140af98a0("Unknown", 0xdf2, 
                ExistingAsyncPackagesCounter is negative, this means we loaded more packages then "
            "requested so there mu", r9_2)
            sub_140afbb40()
        
        int32_t rdx_14
        rdx_14.b = *(rsi_1 + 0x75) == 0
        sub_140bc3580(rsi_1, rdx_14)
        int64_t rdi_3 = sx.q(*(arg1 + 0xd8))
        int32_t rax_18 = (rdi_3 + 1).d
        *(arg1 + 0xd8) = rax_18
        
        if (rax_18 s> *(arg1 + 0xdc))
            sub_1405a4d70(arg1 + 0xd0)
        
        *(*(arg1 + 0xd0) + (rdi_3 << 3)) = rsi_1
        *(rsi_1 + 8) = 1
        sub_140bcb9b0(rsi_1)
        
        if (arg3 != 0xffffffff && sub_140bc43e0(arg1, arg3).b == 0)
            break
    while (*(arg1 + 0xc8) s> 0)
    
    rdi = arg2

if (*rdi != 0 || *(arg1 + 0xd8) s> 0)
    result_3.b = 1
else
    result_3.b = 0

*rdi = result_3.b

if (result_1 != 0)
    bool cond:1_1 = *(arg1 + 0xd8) s<= 0
    int64_t rcx_28 = 0
    int64_t var_58_1 = 0
    int32_t i = 0
    int64_t var_98
    __builtin_memset(&var_98, 0, 0x2c)
    int32_t var_6c_1 = 0x80
    int32_t var_68_1 = 0xffffffff
    int32_t var_64_1 = 0
    int32_t var_50_1 = 0
    
    if (not(cond:1_1))
        do
            void* rbx_2 = *(r15 + *(arg1 + 0xd0))
            
            if (*(rbx_2 + 0x74) == 0)
            label_140bcdf94:
                int32_t rdx_20 = *(arg1 + 0xd8)
                int32_t rax_32 = rdx_20 - i - 1
                
                if (rax_32 s>= 1)
                    rax_32 = 1
                
                if (rax_32 != 0)
                    int64_t rcx_35 = *(arg1 + 0xd0)
                    memcpy(rcx_35 + (sx.q(i) << 3), rcx_35 + (sx.q(rdx_20 - rax_32) << 3), 
                        rax_32 << 3)
                    rdx_20 = *(arg1 + 0xd8)
                
                *(arg1 + 0xd8) = rdx_20 - 1
                sub_1405c53d0(arg1 + 0xd0)
                i -= 1
                r15 -= 8
                sub_140bc3a40(rbx_2)
                void* rax_36 = *(rbx_2 + 0xc8)
                *(rax_36 + 0x174) -= 1
                int32_t rax_37 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rax_37 == 1)
                    int64_t* rcx_40 = *(rbx_2 + 0xe0) + 0x60
                    rcx_40[2].d -= 1
                    
                    if (rcx_40[2].d == 1)
                        sub_140bc7180(rcx_40)
            else if (sub_140bc2f60(rbx_2, &var_98) != 0)
                if (*(rbx_2 + 0x70) s< *(rbx_2 + 0x118))
                    do
                        void* rcx_30 = *(rbx_2 + 0xc8)
                        bool z_2
                        
                        if (0 == *(rcx_30 + 0x19))
                            *(rcx_30 + 0x19) = 0
                            z_2 = true
                        else
                            int64_t rax_23
                            rax_23.b = *(rcx_30 + 0x19)
                            z_2 = false
                        
                        if (not(z_2))
                            break
                        
                        TlsGetValue(data_143e1a81c)
                        int64_t rcx_32 = sx.q(*(rbx_2 + 0x70))
                        int64_t* rdi_7 = (rcx_32 << 4) + *(rbx_2 + 0x130)
                        *(rbx_2 + 0x70) = (rcx_32 + 1).d
                        
                        if (rdi_7[1].b == 0)
                            int64_t* rcx_33 = *rdi_7
                            
                            if ((*(*rcx_33 + 0x18))(rcx_33) != 0)
                                int64_t* rcx_34 = *rdi_7
                                (*(*rcx_34 + 0x28))(rcx_34)
                    while (*(rbx_2 + 0x70) s< *(rbx_2 + 0x118))
                    
                    result_1 = result_2
                
                if (*(rbx_2 + 0x70) == *(rbx_2 + 0x118))
                    goto label_140bcdf94
                
                result_1 = 0
                break
            
            i += 1
            r15 = &r15[1]
        while (i s< *(arg1 + 0xd8))
        
        rcx_28 = var_58_1
    
    int32_t var_50_2 = 0
    
    if (rcx_28 != 0)
        sub_140a74f90(rcx_28)
    
    int64_t var_90
    bool cond:2_1 = var_90:4.d == 0
    var_90.d = 0
    
    if (not(cond:2_1))
        sub_140638cc0(&var_98, 0)
    
    int32_t var_68_2 = 0xffffffff
    int32_t var_64_2 = 0
    int64_t var_88
    sub_14059a8e0(&var_88, 0)
    int64_t var_78
    
    if (var_78 != 0)
        sub_140a74f90(var_78)
    
    int64_t rcx_44 = var_98
    
    if (rcx_44 != 0)
        sub_140a74f90(rcx_44)

uint64_t result

if (result_1 != 2)
    result = zx.q(result_1)
else
    int32_t rax_39 = *(arg1 + 0xd8)
    int32_t rax_40 = neg.d(rax_39)
    result = zx.q(sbb.d(rax_40, rax_40, rax_39 != 0) + result_1)

__security_check_cookie(rax_1 ^ &var_d8)
return result
