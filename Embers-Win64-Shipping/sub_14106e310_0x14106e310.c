// 函数: sub_14106e310
// 地址: 0x14106e310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x18))
int16_t* var_68
int32_t var_60

if (rax.d u<= 6)
    wchar16 const* const rbx_1
    
    switch (rax)
        case 0
            rbx_1 = u".png"
        case 1, 2
            rbx_1 = u".jpg"
        case 3
            rbx_1 = u".bmp"
        case 4
            rbx_1 = u".ico"
        case 5
            rbx_1 = u".exr"
        case 6
            rbx_1 = u".icns"
    
    int32_t r15_1 = 1
    
    if (sub_140a237d0(arg1 + 8, rbx_1, 1) == 0)
        char rax_2
        
        if (*(arg1 + 0x18) == 1)
            rax_2 = sub_140a237d0(arg1 + 8, u".jpeg", 1)
        
        if (*(arg1 + 0x18) != 1 || rax_2 == 0)
            int64_t var_58
            int64_t* rax_3 = sub_140b18720(&var_58, arg1 + 8, 0)
            int16_t* rbx_2
            int32_t rdi_2
            int32_t r15_2
            
            if (*rbx_1 == 0)
                rbx_2 = *rax_3
                *rax_3 = 0
                rdi_2 = rax_3[1].d
                r15_2 = *(rax_3 + 0xc)
                rax_3[1] = 0
            else
                int64_t rdi_1 = -1
                
                do
                    rdi_1 += 1
                while (rbx_1[rdi_1] != 0)
                
                if (rax_3[1].d != 0 || rdi_1.d == 0)
                    r15_1 = 0
                
                int16_t* rax_4 = *rax_3
                *rax_3 = 0
                int32_t rcx_3 = *(rax_3 + 0xc)
                var_68 = rax_4
                int32_t rax_5 = rax_3[1].d
                rax_3[1] = 0
                int32_t rdx_7 = rax_5 + r15_1 + rdi_1.d
                
                if (rdx_7 s> rcx_3)
                    sub_1405947f0(&var_68, rdx_7)
                
                sub_140a20ba0(&var_68, rbx_1, rdi_1.d)
                rbx_2 = var_68
                rdi_2 = rax_5
                r15_2 = rcx_3
                var_68 = nullptr
                var_60.q = 0
            
            void var_48
            
            if (arg1 + 8 != &var_48)
                int64_t rcx_6 = *(arg1 + 8)
                
                if (rcx_6 != 0)
                    sub_140a74f90(rcx_6)
                
                *(arg1 + 8) = rbx_2
                *(arg1 + 0x10) = rdi_2
                *(arg1 + 0x14) = r15_2
            else if (rbx_2 != 0)
                sub_140a74f90(rbx_2)
            
            int64_t rcx_8 = var_58
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)

sub_140b1a780(&var_68, arg1 + 8)
sub_140a464c0()
int16_t* const r15_3 = &data_142d40450
int16_t* const rdx_10 = &data_142d40450

if (var_60 != 0)
    rdx_10 = var_68

char const (* r8_2)[0x4] = data_14399ea08

if ((*(r8_2 + 0x50))(&data_14399ea08, rdx_10, r8_2) == 0)
    sub_140a464c0()
    int16_t* const rdx_11 = &data_142d40450
    
    if (var_60 != 0)
        rdx_11 = var_68
    
    char const (* r9_1)[0x4] = data_14399ea08
    (*(r9_1 + 0x58))(&data_14399ea08, rdx_11, 0, r9_1)

sub_140a464c0()
*(arg1 + 0x10)
int64_t result = (*(data_14399ea08 + 0x108))()

if (result == -1)
label_14106e549:
    int16_t* rcx_10 = var_68
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    void* i = *(arg1 + 0x78)
    void* rdi_5 = (sx.q(*(arg1 + 0x80)) << 6) + i
    uint64_t r12_1 = *(arg1 + 0x70)
    uint64_t arg_8
    
    for (; i != rdi_5; i += 0x40)
        void* rax_10 = *(i + 0x10)
        void* rcx_11 = i + 0x20
        arg_8 = r12_1
        
        if (rax_10 != 0)
            rcx_11 = rax_10
        
        (*i)((*(*rcx_11 + 8))(rcx_11), &arg_8)
    
    char rdx_13 = *(arg1 + 0x18)
    int64_t arg_10
    
    if (rdx_13 != 3)
        result = sub_14106d2e0(&data_143e2ca00, rdx_13)
        
        if (result != 0)
            int64_t* rbx_4 = *(arg1 + 0x70)
            arg_8 = 0
            arg_10 = 0
            int64_t r9_3 = *rbx_4
            (*(r9_3 + 8))(rbx_4, &arg_8, &arg_10, r9_3)
            uint64_t rdx_17 = arg_8
            int64_t r8_6
            
            if (rdx_17 != 0)
                r8_6 = arg_10
            
            if (rdx_17 == 0 || r8_6 != (zx.q(*(rbx_4 + 0x15)) u>> 3) * zx.q(*(rbx_4 + 0x16))
                    * sx.q(*(rbx_4 + 0xc)) * sx.q(rbx_4[1].d))
                r12_1.b = 1
            else
                void* rcx_26 = *(arg1 + 0x70)
                int64_t rax_19 = *(rcx_26 + 8)
                r12_1.b = 1
                
                if ((*(*result + 8))(result, rdx_17, r8_6, zx.q(rax_19.d), (rax_19 u>> 0x20).d, 
                        *(rcx_26 + 0x14), zx.d(*(rcx_26 + 0x15))) != 0)
                    if (*(arg1 + 0x10) != 0)
                        r15_3 = *(arg1 + 8)
                    
                    sub_140a464c0()
                    int64_t r8_7 = *result
                    r12_1 = zx.q(sub_140b27000(
                        (*(r8_7 + 0x18))(result, zx.q(*(arg1 + 0x1c)), r8_7), r15_3, 
                        &data_14399ea08, 0))
            
            EnterCriticalSection(&data_143e2ca00)
            void* i_1 = data_143e2ca38
            
            for (void* rax_24 = i_1 + sx.q(data_143e2ca40.d) * 0x18; i_1 != rax_24; i_1 += 0x18)
                if (*(i_1 + 8) == result)
                    int64_t rbx_5 = sx.q(data_143e2ca30.d)
                    var_68.b = *i_1
                    var_60.q = result
                    int32_t rax_26 = (rbx_5 + 1).d
                    bool cond:4_1 = rax_26 s<= data_143e2ca30:4.d
                    data_143e2ca30.d = rax_26
                    
                    if (not(cond:4_1))
                        sub_1405a4f90(&data_143e2ca28)
                    
                    *(data_143e2ca28 + rbx_5 * 0x10) = var_68.o
                    break
            
            LeaveCriticalSection(&data_143e2ca00)
            return zx.q(r12_1.b)
        
        result.b = 1
    else
        int64_t* rdi_6 = *(arg1 + 0x70)
        int64_t arg_18 = rdi_6[1]
        
        if (*(rdi_6 + 0x15) == 8 && *(rdi_6 + 0x16) == 4)
            int64_t rax_13 = *rdi_6
            arg_8 = 0
            arg_10 = 0
            (*(rax_13 + 8))(rdi_6, &arg_8, &arg_10)
            
            if (arg_8 != 0 && arg_10 == (zx.q(*(rdi_6 + 0x15)) u>> 3) * zx.q(*(rdi_6 + 0x16))
                    * sx.q(*(rdi_6 + 0xc)) * sx.q(rdi_6[1].d))
                if (*(arg1 + 0x10) != 0)
                    *(arg1 + 8)
                
                sub_140a464c0()
                int32_t var_78_1 = 3
                char var_80_1 = 0
                int32_t var_88
                var_88.q = 0
                char var_90
                var_90.q = &data_14399ea08
                int32_t var_98
                var_98.q = 0
                return sub_1405948d0()
        
        result.b = 0
else
    if (*(arg1 + 0x20) != 0)
        int64_t* rax_8 = __crt_deferred_errno_cache::get(&data_143db7b00)
        *(arg1 + 0x10)
        result = (*(*rax_8 + 0x80))()
    
    if (*(arg1 + 0x20) != 0 && result.b != 0)
        goto label_14106e549
    
    int16_t* rcx_32 = var_68
    
    if (rcx_32 != 0)
        sub_140a74f90(rcx_32)
    
    result.b = 0

return result
