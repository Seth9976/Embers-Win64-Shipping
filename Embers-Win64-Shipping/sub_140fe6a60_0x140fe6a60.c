// 函数: sub_140fe6a60
// 地址: 0x140fe6a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = 0
int64_t* var_70 = nullptr
sub_140af2b60()
int64_t rbx

if (sub_140b21a10(&data_143dbb3f0, u"d3ddebug") != 0)
    rbx.b = 1
else
    sub_140af2b60()
    
    if (sub_140b21a10(&data_143dbb3f0, u"d3debug") != 0)
        rbx.b = 1
    else
        sub_140af2b60()
        
        if (sub_140b21a10(&data_143dbb3f0, u"dxdebug") != 0)
            rbx.b = 1
        else
            rbx.b = 0

int64_t* rcx = var_70

if (rcx != 0)
    (*(*rcx + 0x10))(rcx)

void* result = sub_140ffcc00(&var_70, rbx.b)
int64_t* rcx_2 = var_70

if (rcx_2 != 0)
    int64_t* var_60 = nullptr
    (**rcx_2)(rcx_2, &data_142efa5d0, &var_60)
    TEB* gsbase
    int32_t* rdi_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
    
    if (data_143cd5b60 s> *rdi_2)
        _Init_thread_header(&data_143cd5b60)
        
        if (data_143cd5b60 == 0xffffffff)
            sub_140b58260(&data_143cd5b58, &data_142d408a8, 1)
            _Init_thread_footer(&data_143cd5b60)
    
    int64_t rbx_1 = data_143cd5b58
    sub_140a387e0()
    void* r8_2 = data_14399e720
    int32_t rax_7
    int64_t r8_3
    rax_7, r8_3 = (*(r8_2 + 8))(&data_14399e720, rbx_1, r8_2)
    int64_t* var_a0
    int64_t var_78_1
    int64_t rbx_4
    
    if (rax_7 s<= 0)
        rbx_4 = 0
        var_78_1 = 0
    else
        if (data_143cd5b60 s> *rdi_2)
            _Init_thread_header(&data_143cd5b60)
            
            if (data_143cd5b60 == 0xffffffff)
                sub_140b58260(&data_143cd5b58, &data_142d408a8, 1)
                _Init_thread_footer(&data_143cd5b60)
        
        int64_t rbx_2 = data_143cd5b58
        sub_140a387e0()
        var_a0 = nullptr
        int32_t var_94_1 = 0
        int64_t* r12_1 = nullptr
        void* r8_4 = data_14399e720
        int32_t rdi_3 = 0
        int32_t rax_9 = (*(r8_4 + 8))(&data_14399e720, rbx_2, r8_4)
        int32_t rsi_1 = 0
        
        if (rax_9 s> 0)
            do
                void* r9_1 = data_14399e720
                int64_t rax_10 = (*(r9_1 + 0x10))(&data_14399e720, rbx_2, zx.q(rsi_1), r9_1)
                
                if (rax_10 != 0)
                    r15 = rax_10 - 8
                
                int64_t r14_1 = sx.q(rdi_3)
                rdi_3 = (r14_1 + 1).d
                
                if (rdi_3 s> var_94_1)
                    sub_1405a4d70(&var_a0)
                    r12_1 = var_a0
                
                rsi_1 += 1
                r12_1[r14_1] = r15
                r15 = 0
            while (rsi_1 s< rax_9)
        
        sub_1405ea950(r12_1, rdi_3, rax_9.b)
        int64_t* rbx_3 = *r12_1
        sub_140a74f90(r12_1)
        int64_t rax_12
        rax_12, r8_3 = (*(*rbx_3 + 0x60))(rbx_3)
        rbx_4 = rax_12
        var_78_1 = rax_12
    
    int64_t* rcx_8 = data_143db18d0
    
    if (rcx_8 == 0)
        sub_140a53c40()
        rcx_8 = data_143db18d0
    
    r8_3.b = 1
    int64_t* rax_14 = (*(*rcx_8 + 0xb0))(rcx_8, u"r.GraphicsAdapter", r8_3)
    int32_t* rax_15
    
    if (rax_14 == 0)
        rax_15 = nullptr
    else
        int64_t rdx_6 = *rax_14
        rax_15 = (*(rdx_6 + 0x58))(rax_14, rdx_6)
    
    int32_t r13_1 = -1
    int32_t rcx_10
    
    if (rbx_4 != 0)
        rcx_10 = -2
    else if (rax_15 == 0)
        rcx_10 = -1
    else
        rcx_10 = *rax_15
    
    int32_t var_b4 = rcx_10
    sub_140af2b60()
    sub_140b2ab20(&data_143dbb3f0, u"graphicsadapter=", &var_b4)
    bool cond:2_1 = var_b4 == 0xffffffff
    int64_t* r14_2 = nullptr
    int64_t* var_c0 = nullptr
    int32_t rsi_2 = 0
    int32_t var_a8_1 = 0xffffffff
    int32_t var_a4_1 = 0
    int32_t arg_10
    arg_10.b = 0
    char var_b0_1 = 0
    int32_t var_90_1 = 0xffffffff
    int32_t var_8c_1 = 0
    var_a0 = nullptr
    int32_t var_94_2 = 0
    sub_140af2b60()
    int32_t var_c8_1
    
    if (sub_140b21a10(&data_143dbb3f0, u"preferAMD") == 0)
        sub_140af2b60()
        
        if (sub_140b21a10(&data_143dbb3f0, u"preferIntel") == 0)
            sub_140af2b60()
            int32_t rbx_5 = -1
            
            if (sub_140b21a10(&data_143dbb3f0, u"preferNvidia") != 0)
                rbx_5 = 0x10de
            
            var_c8_1 = rbx_5
        else
            var_c8_1 = 0x8086
    else
        var_c8_1 = 0x1002
    
    sub_140af2b60()
    bool cond:1_1 = sub_140b21a10(&data_143dbb3f0, u"AllowSoftwareRendering") != 0
    int64_t i_1 = 2
    int32_t var_88 = 2
    sub_140af2b60()
    sub_140b2ab20(&data_143dbb3f0, u"-gpupreference=", &var_88)
    int32_t rcx_11 = var_88
    int32_t var_b8_1
    
    if (rcx_11 == 1)
        var_b8_1 = 1
    else if (rcx_11 == 2)
        var_b8_1 = 2
    else
        var_b8_1 = 0
    
    int64_t rdi_4 = var_a8_1.q
    int32_t r12_2 = 0
    int64_t rbx_6 = var_90_1.q
    
    while (true)
        int64_t* rcx_13 = var_c0
        var_c0 = nullptr
        
        if (rcx_13 != 0)
            (*(*rcx_13 + 0x10))(rcx_13)
        
        int64_t* rcx_14 = var_60
        
        if (rcx_14 == 0 || var_b8_1 == 0)
            int64_t* rcx_15 = var_70
            result = (*(*rcx_15 + 0x38))(rcx_15, zx.q(r12_2), &var_c0)
        else
            result = (*(*rcx_14 + 0xe8))(rcx_14, zx.q(r12_2), 2, &data_142efa5e0, &var_c0)
        
        if (result.d == 0x887a0002)
            break
        
        int32_t var_80_1 = rsi_2 + 1
        
        if (rsi_2 + 1 s> var_94_2)
            sub_140ffcaf0(&var_a0)
            r14_2 = var_a0
            var_80_1 = rsi_2 + 1
        
        void* r14_3 = &r14_2[sx.q(rsi_2) * 0x26]
        memset(r14_3, 0, 0x130)
        int64_t* rcx_19 = var_c0
        
        if (rcx_19 != 0)
            int32_t rsi_3 = 0
            enum D3D_FEATURE_LEVEL var_84 = 0
            
            if (sub_140ffcde0(rcx_19, 0xb000, 0xb000, &var_84) != 0)
                int64_t* rcx_20 = var_c0
                int32_t rax_29 = (*(*rcx_20 + 0x40))(rcx_20, r14_3)
                
                if (rax_29 s< 0)
                    int64_t var_d8_2 = 0
                    sub_140fff020(rax_29, "TempAdapter->GetDesc(&AdapterDesc)", 
                        "D:"
                    "/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/Windows/WindowsD3D11Device."
                    "cpp", 
                        0x39e)
                
                int64_t* rcx_23
                
                while (true)
                    int64_t* rcx_22 = var_c0
                    int64_t* var_68 = nullptr
                    int32_t rax_31 = (*(*rcx_22 + 0x38))(rcx_22, zx.q(rsi_3), &var_68)
                    rcx_23 = var_68
                    
                    if (rax_31 s< 0)
                        break
                    
                    rsi_3 += 1
                    
                    if (rcx_23 != 0)
                        (*(*rcx_23 + 0x10))(rcx_23)
                
                if (rcx_23 != 0)
                    (*(*rcx_23 + 0x10))(rcx_23)
                
                int32_t rsi_4 = *(r14_3 + 0x100)
                
                if (rsi_4 != 0x1002)
                    char rax_35 = var_b0_1
                    
                    if (rsi_4 == 0x10de)
                        rax_35 = 1
                    
                    var_b0_1 = rax_35
                else
                    arg_10.b = 1
                
                bool cond:6_1 = sub_140a54510(r14_3, u"NVIDIA PerfHUD") == 0
                enum D3D_FEATURE_LEVEL var_54_1 = var_84
                int32_t rax_38 = var_b4
                char rdx_12
                
                if (rsi_4 != 0x1414 || cond:1_1 != 0 || rax_38 s>= 0 || var_78_1 != 0)
                    rdx_12 = 0
                else
                    rdx_12 = 1
                
                int64_t rcx_25
                
                if (var_78_1 == 0 || var_78_1 == *(r14_3 + 0x128))
                    rcx_25.b = 0
                else
                    rcx_25.b = 1
                
                if (rax_38 s< 0 || r12_2 == rax_38)
                    rax_38.b = 0
                else
                    rax_38.b = 1
                
                if (rdx_12 == 0 && cond:6_1 == 0 && rcx_25.b == 0 && rax_38.b == 0)
                    int64_t rax_39 = r12_2.q
                    int32_t rcx_26
                    
                    if (rsi_4 == 0x8086 || (var_a4_1 != 0 && r13_1 s>= 0))
                        rcx_26 = var_c8_1
                        
                        if (rcx_26 == *(r14_3 + 0x100))
                            if ((rdi_4 u>> 0x20).d == 0)
                                rcx_26 = var_c8_1
                            else
                                if (r13_1 s>= 0)
                                    rdi_4 = rax_39
                                
                                var_a8_1.q = rdi_4
                                r13_1 = var_a8_1
                                rcx_26 = var_c8_1
                    else
                        rdi_4 = rax_39
                        var_a8_1.q = rax_39
                        r13_1 = var_a8_1
                        rcx_26 = var_c8_1
                    
                    if (var_8c_1 == 0 || var_90_1 s< 0)
                        rbx_6 = rax_39
                        var_90_1.q = rax_39
                    else if (rcx_26 == *(r14_3 + 0x100))
                        rsi_2 = var_80_1
                        r14_2 = var_a0
                        
                        if ((rbx_6 u>> 0x20).d != 0)
                            rbx_6 = rax_39
                        
                        r12_2 += 1
                        var_90_1.q = rbx_6
                        continue
        
        rsi_2 = var_80_1
        r12_2 += 1
        r14_2 = var_a0
    
    void* rsi_5
    
    if (cond:2_1 == 0 || (arg_10.b == 0 && var_b0_1 == 0))
        rsi_5 = arg1
        *(rsi_5 + 8) = rbx_6
    else
        rsi_5 = arg1
        *(rsi_5 + 8) = rdi_4
        
        if (*(rsi_5 + 0xc) == 0 || rdi_4.d s< 0)
            *(rsi_5 + 8) = rbx_6
    
    if (*(rsi_5 + 0xc) != 0)
        result = sx.q(*(rsi_5 + 8))
        
        if (result.d s>= 0)
            void* rdx_13 = result * 0x130
            result = rsi_5 + 0x10
            void* rdx_14 = rdx_13 + r14_2
            int64_t i
            
            do
                result += 0x80
                int128_t zmm0_1 = *rdx_14
                rdx_14 += 0x80
                *(result - 0x80) = zmm0_1
                *(result - 0x70) = *(rdx_14 - 0x70)
                *(result - 0x60) = *(rdx_14 - 0x60)
                *(result - 0x50) = *(rdx_14 - 0x50)
                *(result - 0x40) = *(rdx_14 - 0x40)
                *(result - 0x30) = *(rdx_14 - 0x30)
                *(result - 0x20) = *(rdx_14 - 0x20)
                *(result - 0x10) = *(rdx_14 - 0x10)
                i = i_1
                i_1 -= 1
            while (i != 1)
            *result = *rdx_14
            *(result + 0x10) = *(rdx_14 + 0x10)
            *(result + 0x20) = *(rdx_14 + 0x20)
    
    if (r14_2 != 0)
        result = sub_140a74f90(r14_2)
    
    int64_t* rcx_32 = var_c0
    
    if (rcx_32 != 0)
        result = (*(*rcx_32 + 0x10))(rcx_32)
    
    int64_t* rcx_33 = var_60
    
    if (rcx_33 != 0)
        result = (*(*rcx_33 + 0x10))(rcx_33)
    
    int64_t* rcx_34 = var_70
    
    if (rcx_34 != 0)
        return (*(*rcx_34 + 0x10))(rcx_34)

return result
