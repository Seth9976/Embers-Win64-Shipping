// 函数: sub_1410693f0
// 地址: 0x1410693f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rax_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143e2c808 s> *rax_2)
    _Init_thread_header(&data_143e2c808)
    
    if (data_143e2c808 == 0xffffffff)
        InitializeCriticalSection(&data_143e2c7e0)
        SetCriticalSectionSpinCount(&data_143e2c7e0, 0xfa0)
        atexit(sub_142ccd920)
        _Init_thread_footer(&data_143e2c808)

EnterCriticalSection(&data_143e2c7e0)
int64_t* r14 = data_143f0f180
data_143de542b = 1
data_143dbb3e0 = 1
int64_t* var_140 = r14

if (r14 != 0)
    (*(*r14 + 0x690))(r14)
    r14 = data_143f0f180
    var_140 = r14

int32_t i = 0
int64_t rsi
rsi.b = 1
char arg_20 = 1
int64_t* var_158

if (r14[5].d s> 0)
    int64_t* rcx_1 = nullptr
    var_158 = nullptr
    
    do
        int64_t r12_1 = *(rcx_1 + r14[4])
        int32_t r14_1 = 1 << (data_1439c7a34).b
        int32_t j_3 = r14_1 - 1
        
        if (r14_1 != 1)
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_forward(j_3)
            int32_t rdi_1 = temp0_1
            int32_t var_118_1 = rdi_1
            int32_t j
            
            do
                void* rbx_1 = *(r12_1 + (zx.q(rdi_1) << 3) + 0x9d8)
                int64_t rax_7
                
                if (arg1 != 0)
                    rax_7 = sub_141022ce0(rbx_1)
                
                if (arg1 == 0 || rax_7 == arg1)
                    if (rsi.b == 0)
                        rsi.b = 0
                    else if (sub_141064630(*(rbx_1 + 0x20) + 0x830, *(rbx_1 + 0x38)) == 0)
                        rsi.b = 0
                    else if (sub_141064630(*(rbx_1 + 0x20) + 0x830, *(rbx_1 + 0x48)) == 0)
                        rsi.b = 0
                    else if (sub_141064630(*(rbx_1 + 0x20) + 0x830, *(rbx_1 + 0x40)) == 0)
                        rsi.b = 0
                    else
                        rsi.b = 1
                    
                    arg_20 = rsi.b
                
                j = not.d(1 << rdi_1.b) & j_3
                j_3 = j
                
                if (j != 0)
                    uint64_t rflags_2
                    int32_t temp0_2
                    temp0_2, rflags_2 = _bit_scan_forward(j)
                    rdi_1 = temp0_2
                    int32_t var_114_1 = rdi_1
                else
                    rdi_1 = 0x20
            while (j != 0)
        
        i += 1
        r14 = var_140
        rcx_1 = &var_158[2]
        var_158 = rcx_1
    while (i s< r14[5].d)
    
    r14 = data_143f0f180
    var_140 = r14

int64_t r13 = 0
int32_t i_1 = 0

if (r14[5].d s> 0)
    do
        int32_t rsi_1 = 1 << (data_1439c7a34).b
        int64_t r14_2 = *(r14[4] + r13)
        int32_t j_2 = rsi_1 - 1
        
        if (rsi_1 != 1)
            uint64_t rflags_3
            int32_t temp0_3
            temp0_3, rflags_3 = _bit_scan_forward(j_2)
            int32_t rbx_2 = temp0_3
            int32_t var_110_1 = rbx_2
            int32_t j_1
            
            do
                void* rdi_2 = *(r14_2 + (zx.q(rbx_2) << 3) + 0x9d8)
                
                if (arg1 == 0)
                label_14106961c:
                    int64_t* rax_17 = sub_141022ce0(rdi_2)
                    var_158 = nullptr
                    int64_t r9_1 = *rax_17
                    
                    if ((*r9_1)(rax_17, &data_142f030c8, &var_158, r9_1) s>= 0)
                        int64_t* rcx_17 = var_158
                        void var_108
                        (*(*rcx_17 + 0x18))(rcx_17, &var_108)
                        int64_t* rcx_18 = var_158
                        void var_f8
                        (*(*rcx_18 + 0x20))(rcx_18, &var_f8)
                else if (sub_141022ce0(rdi_2) == arg1 && arg1 == sub_141022ce0(rdi_2))
                    goto label_14106961c
                
                j_1 = not.d(1 << rbx_2.b) & j_2
                j_2 = j_1
                
                if (j_1 != 0)
                    uint64_t rflags_4
                    int32_t temp0_4
                    temp0_4, rflags_4 = _bit_scan_forward(j_1)
                    rbx_2 = temp0_4
                    int32_t var_10c_1 = rbx_2
                else
                    rbx_2 = 0x20
            while (j_1 != 0)
        
        r14 = var_140
        i_1 += 1
        r13 += 0x10
    while (i_1 s< r14[5].d)

int64_t var_130
__builtin_memset(&var_130, 0, 0x14)
void var_d0
sub_140a9eae0(&var_130, _vfprintf_p_l(&var_d0, GPU Crashed or D3D Device Removed.\n", 
    Developer.MessageLog"))
int64_t* var_c8

if (var_c8 != 0)
    var_c8[1].d -= 1
    
    if (var_c8[1].d == 1)
        (**var_c8)(var_c8)
        int32_t rax_26 = *(var_c8 + 0xc)
        *(var_c8 + 0xc) -= 1
        
        if (rax_26 == 1)
            (*(*var_c8 + 8))(var_c8, 1)

if (*(*r14[4] + 0x4d) == 0)
    void var_b8
    sub_140a9eae0(&var_130, _vfprintf_p_l(&var_b8, Use -d3ddebug to enable the D3D debug device.", 
        Developer.MessageLog"))
    int64_t* var_b0
    
    if (var_b0 != 0)
        var_b0[1].d -= 1
        
        if (var_b0[1].d == 1)
            (**var_b0)(var_b0)
            int32_t rax_32 = *(var_b0 + 0xc)
            *(var_b0 + 0xc) -= 1
            
            if (rax_32 == 1)
                (*(*var_b0 + 8))(var_b0, 1)

int64_t* rdi_5

if (*(*r14[4] + 0x50) == 0)
    void var_88
    sub_140a9eae0(&var_130, 
        _vfprintf_p_l(&var_88, Use -gpucrashdebugging to track current GPU state.", 
        Developer.MessageLog"))
    int64_t* var_80
    rdi_5 = var_80
else
    void var_a0
    sub_140a9eae0(&var_130, _vfprintf_p_l(&var_a0, Check log for GPU state information.", 
        Developer.MessageLog"))
    int64_t* var_98
    rdi_5 = var_98

if (rdi_5 != 0)
    rdi_5[1].d -= 1
    
    if (rdi_5[1].d == 1)
        (**rdi_5)(rdi_5)
        int32_t rax_39 = *(rdi_5 + 0xc)
        *(rdi_5 + 0xc) -= 1
        
        if (rax_39 == 1)
            (*(*rdi_5 + 8))(rdi_5, 1)

if (arg2 != 0)
    void var_70
    sub_140a9eae0(&var_130, 
        _vfprintf_p_l(&var_70, \nA GPU mini dump will be saved in the Crashes folder.", 
        Developer.MessageLog"))
    int64_t* var_68
    
    if (var_68 != 0)
        var_68[1].d -= 1
        
        if (var_68[1].d == 1)
            (**var_68)(var_68)
            int32_t rax_44 = *(var_68 + 0xc)
            *(var_68 + 0xc) -= 1
            
            if (rax_44 == 1)
                (*(*var_68 + 8))(var_68, 1)

sub_140b19e60()
void* rdx_10 = data_1439a8bd0
(*(rdx_10 + 0x50))(&data_1439a8bd0, rdx_10)
sub_140b19e60()
void* rdx_11 = data_1439a8bd0
(*(rdx_11 + 0x18))(&data_1439a8bd0, rdx_11)

if (data_143db4814 s> *rax_2)
    _Init_thread_header(&data_143db4814)
    
    if (data_143db4814 == 0xffffffff)
        sub_140af2b60()
        data_143db4810 = sub_140b21a10(&data_143dbb3f0, u"UNATTENDED")
        _Init_thread_footer(&data_143db4814)

int16_t* const lpFileName = &data_142d40450

if (data_143db4810 == 0 && data_143de548d == 0)
    void var_58
    int64_t* rax_48 = sub_140ac6680(sub_140ac66a0(&var_130, &var_58))
    PWSTR rdx_13
    
    if (rax_48[1].d == 0)
        rdx_13 = &data_142d40450
    else
        rdx_13 = *rax_48
    
    sub_140b709d0(0, rdx_13, u"Error")
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t rbx_3 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (rbx_3 == 1)
                (*(*var_50 + 8))(var_50, zx.q(rbx_3))

if (arg2 == 0)
    sub_140b19e60()
    void* rdx_17 = data_1439a8bd0
    (*(rdx_17 + 0x50))(&data_1439a8bd0, rdx_17)
    sub_140b19e60()
    void* rdx_18 = data_1439a8bd0
    (*(rdx_18 + 0x18))(&data_1439a8bd0, rdx_18)
    sub_140b721f0(1)
    return sub_140846740(&var_130)

int64_t var_e0
int64_t** rax_52 = sub_140b252d0(&var_e0)

if (rax_52[1].d == 0)
    var_140 = &data_142d40450
else
    var_140 = *rax_52

wchar16 const* const var_138 = u"UE4AftermathD3D12.nv-gpudmp"
uint64_t lpFileName_1 = 0
int32_t var_148 = 0
sub_140b0f5f0(&lpFileName_1, &var_140, 2)
int64_t rcx_47 = var_e0

if (rcx_47 != 0)
    sub_140a74f90(rcx_47)

if (var_148 != 0)
    lpFileName = lpFileName_1

HANDLE rax_54 = CreateFileW(lpFileName, 0x40000000, FILE_SHARE_NONE, nullptr, CREATE_ALWAYS, 
    FILE_ATTRIBUTE_NORMAL, nullptr)

if (rax_54 != -1)
    WriteFile(rax_54, arg2, arg3, nullptr, nullptr)

CloseHandle(rax_54)
sub_140b62d70(u"Aftermath GPU Crash dump Triggered", 0)
noreturn
