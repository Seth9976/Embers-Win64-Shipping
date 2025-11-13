// 函数: sub_1417efb70
// 地址: 0x1417efb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
TEB* gsbase

if (data_143ef98b8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ef98b8)
    
    if (data_143ef98b8 == 0xffffffff)
        sub_140b58260(&data_143ef98b0, u"MotionController", 1)
        _Init_thread_footer(&data_143ef98b8)

int64_t rbx = data_143ef98b0
sub_140a387e0()
int64_t* var_28
sub_140d6fcf0(&data_14399e720, &var_28, rbx)
int64_t* r15 = var_28
int64_t* r14 = r15
int32_t var_20
void* rbp = &r15[sx.q(var_20)]

if (r15 != rbp)
    do
        int64_t* rcx = *r14
        
        if (rcx != 0)
            int64_t rax_3 = *rcx
            var_28 = nullptr
            var_20.q = 0
            (*(rax_3 + 0x20))(rcx, &var_28)
            int32_t rcx_1 = var_20
            int32_t rdx_5 = arg1[1].d + rcx_1
            
            if (rdx_5 s> *(arg1 + 0xc))
                sub_140638c50(arg1, rdx_5)
                rcx_1 = var_20
            
            int64_t* rbx_1 = var_28
            void* rsi_1 = &rbx_1[sx.q(rcx_1)]
            
            if (rbx_1 != rsi_1)
                do
                    sub_140664c50(arg1, rbx_1)
                    rbx_1 = &rbx_1[1]
                while (rbx_1 != rsi_1)
                
                rbx_1 = var_28
            
            if (rbx_1 != 0)
                sub_140a74f90(rbx_1)
        
        r14 = &r14[1]
    while (r14 != rbp)

if (r15 != 0)
    sub_140a74f90(r15)

return arg1
