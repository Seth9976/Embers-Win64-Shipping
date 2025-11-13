// 函数: sub_1412e8bd0
// 地址: 0x1412e8bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
r14.b = 0
int64_t rdi = 0
int64_t rcx
int64_t rbx_1

if ((*(arg1 + 0x497c) & 0x1000) != 0)
    rbx_1 = data_143e8efb8
    
    if (data_143de5480 == 0)
        rcx = 0
    else
        rcx.b = GetCurrentThreadId() != data_143de5470

TEB* gsbase

if ((*(arg1 + 0x497c) & 0x1000) == 0 || *(rbx_1 + (rcx << 2)) == 0)
    void* rbx_2 = nullptr
    int32_t* r15_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
label_1412e8c63:
    
    if (data_143e903d8 s> *r15_2)
        _Init_thread_header(&data_143e903d8)
        
        if (data_143e903d8 == 0xffffffff)
            sub_140b58260(&data_143e903d0, u"FPostProcessMaterialNode", 1)
            _Init_thread_footer(&data_143e903d8)
    
    void* r8_1 = *(arg1 + 0x1510)
    
    while (true)
        void* rcx_1
        
        if (rbx_2 != 0)
            rcx_1 = zx.q(*(rbx_2 + 0x10)) + 0x14 + rbx_2 + zx.q(*(rbx_2 + 0xc))
        else
            rcx_1 = r8_1
        
        rbx_2 = nullptr
        
        if (rcx_1 != sx.q(*(arg1 + 0x1518)) + r8_1)
            rbx_2 = rcx_1
        
        if (rbx_2 == 0)
            break
        
        if (*(rbx_2 + 4) == data_143e903d0)
            uint64_t rax_5 = zx.q(*(rbx_2 + 0x10))
            
            if (rbx_2 + 0x14 == neg.q(rax_5))
                goto label_1412e8d46
            
            int64_t* rcx_7 = *(rbx_2 + 0x14 + rax_5)
            
            if (rcx_7 == 0)
                goto label_1412e8c63
            
            int64_t* rax_7 = (*(*rcx_7 + 0x280))(rcx_7)
            uint64_t rdx_3 = zx.q(*(arg1 + 0x1548))
            int64_t arg_8 = 0
            int64_t r9_3 = *rax_7
            int64_t* rax_8 = (*(r9_3 + 0x40))(rax_7, rdx_3, &arg_8, r9_3)
            int64_t rdx_4 = *rax_8
            
            if ((*(rdx_4 + 0x318))(rax_8, rdx_4) == 0
                    && (*(*(sub_1405948b0(rax_8) + 0x28) + 0x178) & 0x2002000) == 0)
                goto label_1412e8c63
            
            r14.b = 1
            goto label_1412e8d46
else
    r14.b = 1

label_1412e8d46:
uint64_t result

if (data_143ea9950 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    int64_t r8_3
    result, r8_3 = _Init_thread_header(&data_143ea9950)
    
    if (data_143ea9950 == 0xffffffff)
        int64_t* rcx_14 = data_143db18d0
        
        if (rcx_14 == 0)
            sub_140a53c40()
            rcx_14 = data_143db18d0
        
        r8_3.b = 1
        int64_t* rax_13 = (*(*rcx_14 + 0xb0))(rcx_14, u"r.CustomDepth", r8_3)
        
        if (rax_13 != 0)
            int64_t rdx_5 = *rax_13
            rdi = (*(rdx_5 + 0x58))(rax_13, rdx_5)
        
        data_143ea9948 = rdi
        _Init_thread_footer(&data_143ea9950)

if (*(arg1 + 0x18a9) == 0)
    result = data_143ea9948
    
    if (result == 0 || *(result + 4) s<= 1)
        result.b = 0
        result.b = 0
        return result

result.b = 1
result.b = 1 & r14.b
return result
