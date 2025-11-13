// 函数: sub_141e7d780
// 地址: 0x141e7d780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_38 = 0
int32_t var_30 = 0
sub_140af5b90(data_143ddb400, /Script/WindowsTargetPlatform.WindowsTargetSettings", ReverbPlugin", 
    &var_38, &data_143de5780)
TEB* gsbase

if (data_143f3a030 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f3a030)
    
    if (data_143f3a030 == 0xffffffff)
        sub_140b58260(&data_143f3a028, u"AudioReverbPlugin", 1)
        _Init_thread_footer(&data_143f3a030)

int64_t rbx = data_143f3a028
sub_140a387e0()
int64_t* rbp = nullptr
int32_t r15 = 0
int64_t* var_48 = nullptr
int32_t var_3c = 0
void* r8 = data_14399e720
int32_t rsi = 0
int32_t rax_2 = (*(r8 + 8))(&data_14399e720, rbx, r8)
int32_t r14 = 0

if (rax_2 s> 0)
    int64_t* rcx_4
    
    do
        void* r9_1 = data_14399e720
        int64_t rax_3 = (*(r9_1 + 0x10))(&data_14399e720, rbx, zx.q(r14), r9_1)
        int64_t rbp_1
        
        if (rax_3 == 0)
            rbp_1 = 0
        else
            rbp_1 = rax_3 - 8
        
        int64_t rdi_1 = sx.q(rsi)
        rsi = (rdi_1 + 1).d
        
        if (rsi s> r15)
            sub_1405a4d70(&var_48)
            r15 = var_3c
        
        rcx_4 = var_48
        r14 += 1
        rcx_4[rdi_1] = rbp_1
    while (r14 s< rax_2)
    
    rbp = rcx_4

int64_t* rdi_2 = rbp
void* r14_2 = &rbp[sx.q(rsi)]
int64_t* result

if (rbp == r14_2)
label_141e7d90f:
    result = nullptr
else
    while (true)
        result = *rdi_2
        void** rax_6 = (**result)(result, &var_48)
        int16_t* const rdx_4 = &data_142d40450
        
        if (var_30 != 0)
            rdx_4 = var_38
        
        void* rax_7
        
        if (rax_6[1].d == 0)
            rax_7 = &data_142d40450
        else
            rax_7 = *rax_6
        
        void* rdx_5 = rdx_4 - rax_7
        uint32_t i
        uint32_t rbx_1
        
        do
            rbx_1 = zx.d(*rax_7)
            i = zx.d(*(rax_7 + rdx_5))
            
            if (rbx_1 != i)
                break
            
            rax_7 += 2
        while (i != 0)
        
        int64_t* rcx_6 = var_48
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        if (rbx_1 - i == 0)
            break
        
        rdi_2 = &rdi_2[1]
        
        if (rdi_2 == r14_2)
            goto label_141e7d90f

if (rbp != 0)
    sub_140a74f90(rbp)

uint64_t rcx_8 = var_38

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return result
