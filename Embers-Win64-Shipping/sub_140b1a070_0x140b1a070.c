// 函数: sub_140b1a070
// 地址: 0x140b1a070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143de5dc4 != 0)
    return zx.q(data_143de5dc8)

if (arg1 != 0 && data_143de6820 != 0)
    int64_t* rcx = data_143de6818
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1 = nullptr
        
        if (data_143de6820 != 0)
            rcx_1 = data_143de6818
        
        int32_t result = (*(*rcx_1 + 0x48))(rcx_1)
        data_143de5dc8 = result
        data_143de5dc4 = 1
        return result

int32_t rbp = data_1439a04f0
int32_t rsi = data_143de5dcc
TEB* gsbase

if (data_143de6d00 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de6d00)
    
    if (data_143de6d00 == 0xffffffff)
        int64_t* r10_1 = data_143db18d0
        
        if (r10_1 == 0)
            sub_140a53c40()
            r10_1 = data_143db18d0
        
        data_143de6cf8 = (*(*r10_1 + 0x38))(r10_1, networkversionoverride", &data_143de6ce4, 
            Sets network version used for multiplayer ", 0)
        data_143de6cf0 = &data_142d3ff10
        atexit(sub_142cbf8b0)
        _Init_thread_footer(&data_143de6d00)

int32_t rbx_2

if (data_143de6ce8 != 0)
label_140b1a191:
    rbx_2 = data_143de6ce4
else
    data_143de6ce8 = 1
    sub_140af2b60()
    int16_t rdx_1 = data_143dbb3f0
    char r8_1 = 0
    void* rbx_1 = &data_143dbb3f2
    
    if (rdx_1 == 0)
    label_140b1a191_1:
        rbx_2 = data_143de6ce4
    else
        while (true)
            int16_t rcx_4 = rdx_1 - 0x20
            
            if (rdx_1 - 0x61 u> 0x19)
                rcx_4 = rdx_1
            
            if (r8_1 == 0 && rcx_4 == 0x4e)
                if (sub_140a546e0(rbx_1, u"etworkversionoverride=", 0x16) == 0)
                    break
                
                r8_1 = 1
            else if (rcx_4 - 0x41 u<= 0x19 || rcx_4 - 0x30 u<= 9)
                r8_1 = 1
            else
                r8_1 = 0
            
            rdx_1 = *rbx_1
            rbx_1 += 2
            
            if (rdx_1 == 0)
                goto label_140b1a191_2
        
        if (rbx_1 == 2)
        label_140b1a191_2:
            rbx_2 = data_143de6ce4
        else
            int32_t rax_10 = _wtoi(rbx_1 + 0x2c)
            rbx_2 = rax_10
            data_143de6ce4 = rax_10

if (rbx_2 == 0)
    rbx_2 = 0xc89141

sub_140b1aa70()
int16_t* const rdi = &data_142d40450

if (data_143de6cd8 != 0)
    data_143de6cd0

int32_t var_38 = rsi
int32_t var_40 = rbp
int32_t var_48 = rbx_2
int64_t var_28
sub_140a2e390(&var_28, u"%s %s, NetCL: %d, EngineNetVer: %d, GameNetVer: %d", u"Embers")
int64_t var_18
int16_t** rax_11 = sub_140a35730(&var_28, &var_18)

if (rax_11[1].d != 0)
    rdi = *rax_11

int32_t rax_12 = sub_140a5ff80(rdi, 0)
int64_t rcx_11 = var_18
int32_t rbx_3 = rax_12
data_143de5dc8 = rax_12

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)
    rbx_3 = data_143de5dc8

int64_t rcx_12 = var_28
data_143de5dc4 = 1

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

return zx.q(rbx_3)
