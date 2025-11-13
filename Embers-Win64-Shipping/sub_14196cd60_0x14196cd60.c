// 函数: sub_14196cd60
// 地址: 0x14196cd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f0fae8 s> *rbx_1)
    _Init_thread_header(&data_143f0fae8)
    
    if (data_143f0fae8 == 0xffffffff)
        int64_t* rcx_15 = data_143db18d0
        
        if (rcx_15 == 0)
            sub_140a53c40()
            rcx_15 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        data_143f0fae0 = (*(*rcx_15 + 0xb0))(rcx_15, u"r.rhicmdbypass", r8_2)
        _Init_thread_footer(&data_143f0fae8)

if (data_143f0faf8 s> *rbx_1)
    _Init_thread_header(&data_143f0faf8)
    
    if (data_143f0faf8 == 0xffffffff)
        int64_t* rcx_16 = data_143db18d0
        
        if (rcx_16 == 0)
            sub_140a53c40()
            rcx_16 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        data_143f0faf0 = (*(*rcx_16 + 0xb0))(rcx_16, u"r.ShowMaterialDrawEvents", r8_3)
        _Init_thread_footer(&data_143f0faf8)

if (data_143f0fb08 s> *rbx_1)
    _Init_thread_header(&data_143f0fb08)
    
    if (data_143f0fb08 == 0xffffffff)
        int64_t* rcx_17 = data_143db18d0
        
        if (rcx_17 == 0)
            sub_140a53c40()
            rcx_17 = data_143db18d0
        
        int64_t r8_4
        r8_4.b = 1
        data_143f0fb00 = (*(*rcx_17 + 0xb8))(rcx_17, u"r.RHIThread.Enable", r8_4)
        _Init_thread_footer(&data_143f0fb08)

if (data_143f0fb18 s> *rbx_1)
    _Init_thread_header(&data_143f0fb18)
    
    if (data_143f0fb18 == 0xffffffff)
        int64_t* rcx_18 = data_143f0fb00
        int64_t rax_11
        
        if (rcx_18 == 0)
            rax_11 = 0
        else
            rax_11 = (*(*rcx_18 + 0x70))(rcx_18)
        
        data_143f0fb10 = rax_11
        _Init_thread_footer(&data_143f0fb18)

char rbx_2 = arg2 ^ 1
int32_t result = sub_140af3aa0()
int64_t* r9 = data_143f0faf0
int64_t r14
r14.b = result.b != 0
int64_t rdi

if (r9 == 0)
    rdi.b = 0
else
    result = (*(*r9 + 0x90))(r9)
    r9 = data_143f0faf0
    rdi.b = result != 0

int64_t* rcx_2 = data_143f0fae0
char rbp = data_143f01c92
int64_t r15

if (rcx_2 == 0)
    r15.b = 0
else
    result = (*(*rcx_2 + 0x90))(rcx_2)
    r9 = data_143f0faf0
    r15.b = result != 0

if (arg2 != r14.b)
    sub_140b00890(arg2)
    r9 = data_143f0faf0

if (arg2 != rdi.b && r9 != 0)
    result = sub_1405a55d0(r9, zx.d(rbx_2) - 1, 0x8000000)

if (rbp != rbx_2 && data_143f0fb10 != 0)
    int64_t* var_38 = nullptr
    int32_t var_30_1 = 0
    int64_t var_28
    sub_140a2e390(&var_28, u"%i", zx.q(rbx_2))
    int64_t rbx_3 = sx.q(var_30_1)
    int32_t i_2 = (rbx_3 + 1).d
    
    if (i_2 s> 0)
        sub_1405a4f90(&var_38)
    
    int64_t* rcx_9 = &var_38[rbx_3 * 2]
    *rcx_9 = 0
    *rcx_9 = var_28
    var_28 = 0
    int32_t var_20
    rcx_9[1].d = var_20
    int32_t var_1c
    *(rcx_9 + 0xc) = var_1c
    int64_t rcx_10 = var_28
    var_20.q = 0
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    int64_t rbx_4 = *data_143f0fb10
    sub_140b19e60()
    result = (*(rbx_4 + 0x80))(data_143f0fb10, &var_38, 0, &data_1439a8bd0)
    int32_t i_1 = i_2
    int64_t* rbx_5 = var_38
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_12 = *rbx_5
            
            if (rcx_12 != 0)
                result = sub_140a74f90(rcx_12)
            
            rbx_5 = &rbx_5[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_5 = var_38
    
    if (rbx_5 != 0)
        result = sub_140a74f90(rbx_5)

if (r15.b != arg2)
    int64_t* rcx_14 = data_143f0fae0
    
    if (rcx_14 != 0)
        return sub_1405a55d0(rcx_14, zx.d(arg2), 0x9000000)

return result
