// 函数: sub_1417f1c00
// 地址: 0x1417f1c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    int64_t rax
    rax.b = 0
    return rax

int64_t* r9 = &data_143ef9720
char r10 = 0
uint64_t rbp
rbp.b = 0x10
int64_t* rdi = nullptr
int32_t r14 = *(arg1 + 0x408)

for (int32_t i = 0; i s< 0x11; )
    int32_t j = 0
    int64_t* rcx = r9
    
    do
        if (*rcx == *(arg1 + 0x410))
            rbp = zx.q(i.b)
            r10 = 1
            break
        
        j += 1
        rcx = &rcx[1]
    while (j u< 2)
    
    i += 1
    r9 = &r9[2]

if (r10 != 0)
    TEB* gsbase
    int32_t* rsi_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
    
    if (data_143ef9900 s> *rsi_2)
        _Init_thread_header(&data_143ef9900)
        
        if (data_143ef9900 == 0xffffffff)
            sub_140b58260(&data_143ef98f8, u"MotionTrackingSystemManagement", 1)
            _Init_thread_footer(&data_143ef9900)
    
    int64_t rbx_1 = data_143ef98f8
    sub_140a387e0()
    void* r8 = data_14399e720
    
    if ((*(r8 + 8))(&data_14399e720, rbx_1, r8).d s> 0)
        if (data_143ef9900 s> *rsi_2)
            _Init_thread_header(&data_143ef9900)
            
            if (data_143ef9900 == 0xffffffff)
                sub_140b58260(&data_143ef98f8, u"MotionTrackingSystemManagement", 1)
                _Init_thread_footer(&data_143ef9900)
        
        int64_t rbx_2 = data_143ef98f8
        sub_140a387e0()
        void* r9_1 = data_14399e720
        void* rax_5 = (*(r9_1 + 0x10))(&data_14399e720, rbx_2, 0, r9_1)
        
        if (rax_5 != 0)
            rdi = rax_5 - 8
        
        return (*(*rdi + 0x18))(rdi, zx.q(r14), zx.q(rbp.b))

int64_t rax_1
rax_1.b = 1
return rax_1
