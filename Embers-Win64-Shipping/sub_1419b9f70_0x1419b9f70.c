// 函数: sub_1419b9f70
// 地址: 0x1419b9f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419ba990(arg1)

if (*(arg1 + 0x61) != 0)
    *(arg1 + 0x61) = 0
    *(arg1 + 0x69) = 1

TEB* gsbase

if (data_143f1afe8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f1afe8)
    
    if (data_143f1afe8 == 0xffffffff)
        int64_t* rcx_11 = data_143db18d0
        
        if (rcx_11 == 0)
            sub_140a53c40()
            rcx_11 = data_143db18d0
        
        int64_t r8_4
        r8_4.b = 1
        int64_t* rax_20 = (*(*rcx_11 + 0xb0))(rcx_11, u"r.RenderTargetPoolMin", r8_4)
        int64_t rax_18
        
        if (rax_20 == 0)
            rax_18 = 0
        else
            int64_t rdx_6 = *rax_20
            rax_18 = (*(rdx_6 + 0x58))(rax_20, rdx_6)
        
        data_143f1afe0 = rax_18
        _Init_thread_footer(&data_143f1afe8)

int32_t rcx_1 = *(data_143f1afe0 + 4)
int32_t r15

if (rcx_1 s>= 0)
    r15 = 0x7d0
    
    if (rcx_1 s< 0x7d0)
        r15 = rcx_1
else
    r15 = 0

int32_t rbp = *(arg1 + 0x18)
int32_t rbx = 0
int32_t r15_1 = r15 << 0xa

if (rbp != 0)
    do
        int64_t r14_1 = sx.q(rbx)
        
        if (*(*(arg1 + 0x10) + (r14_1 << 3)) == 0)
            int32_t rdx_1 = *(arg1 + 0x18)
            int32_t rax_6 = rdx_1 - rbx - 1
            
            if (rax_6 s>= 1)
                rax_6 = 1
            
            if (rax_6 != 0)
                int64_t rcx_3 = *(arg1 + 0x10)
                memcpy(rcx_3 + (r14_1 << 3), rcx_3 + (sx.q(rdx_1 - rax_6) << 3), rax_6 << 3)
                rdx_1 = *(arg1 + 0x18)
            
            *(arg1 + 0x18) = rdx_1 - 1
            sub_1405c53d0(arg1 + 0x10)
            rbp -= 1
        
        rbx += 1
    while (rbx u< rbp)
    
    rbp = *(arg1 + 0x18)

int32_t i = 0

if (rbp != 0)
    do
        void* rdx_4 = *(*(arg1 + 0x10) + (sx.q(i) << 3))
        
        if (rdx_4 != 0 && *(rdx_4 + 0xe0) == 0 && *(rdx_4 + 0x88) == 1)
            *(rdx_4 + 0x8c) += 1
        
        i += 1
    while (i u< *(arg1 + 0x18))

int32_t result = *(arg1 + 0x50)

if (result u> r15_1)
    while (true)
        int32_t r11_1 = *(arg1 + 0x18)
        int32_t r8_3 = -1
        int32_t rdx_5 = 0
        
        if (r11_1 != 0)
            int64_t r10_1 = *(arg1 + 0x10)
            
            do
                void* rcx_7 = *(r10_1 + (sx.q(rdx_5) << 3))
                
                if (rcx_7 != 0)
                    int32_t r9_1 = *(rcx_7 + 0x8c)
                    
                    if (r9_1 u> 2)
                        if (r8_3 == 0xffffffff)
                            r8_3 = rdx_5
                        else
                            int32_t rax_12 = rdx_5
                            
                            if (*(*(r10_1 + (sx.q(r8_3) << 3)) + 0x8c) u>= r9_1)
                                rax_12 = r8_3
                            
                            r8_3 = rax_12
                
                rdx_5 += 1
            while (rdx_5 u< r11_1)
            
            result = *(arg1 + 0x50)
            
            if (r8_3 != 0xffffffff)
                int64_t rbx_1 = sx.q(r8_3)
                int64_t* rcx_9 = *(r10_1 + (rbx_1 << 3))
                uint32_t rax_16 = ((*(*rcx_9 + 0x20))(rcx_9, rdx_5) + 0x3ff) u>> 0xa
                *(arg1 + 0x50) -= rax_16
                int64_t rax_17 = *(arg1 + 0x10)
                int64_t* rcx_10 = *(rax_17 + (rbx_1 << 3))
                *(rax_17 + (rbx_1 << 3)) = 0
                
                if (rcx_10 != 0)
                    sub_1419aa220(rcx_10)
                
                result = *(arg1 + 0x50)
                
                if (result u<= r15_1)
                    break
                
                continue
        
        if (*(arg1 + 0x60) != 0)
            break
        
        result = *(arg1 + 0x50)
        *(arg1 + 0x60) = 1
        break

if (result u<= r15_1 && *(arg1 + 0x60) != 0)
    *(arg1 + 0x60) = 0

return result
