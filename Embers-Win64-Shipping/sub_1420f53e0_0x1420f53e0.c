// 函数: sub_1420f53e0
// 地址: 0x1420f53e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *arg2 = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg3, 4)

int64_t* rcx_2 = arg1[1]
int32_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    arg2[1] = *r8_1
    int64_t* rax_6 = arg1[1]
    *rax_6 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[1], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[1], 4)

int32_t rax_8
int512_t zmm1
rax_8, zmm1 = sub_140b4e7c0(arg1, &data_1439a9478)

if (rax_8 s>= 0x16)
    int64_t* rcx_5 = arg1[1]
    int32_t* r8_2 = *rcx_5
    
    if (&r8_2[1] u<= rcx_5[1])
        arg2[2] = *r8_2
        int64_t* rax_11 = arg1[1]
        *rax_11 += 4
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, &arg2[2], zmm1)
    else
        (*(*arg1 + 0x150))(arg1, &arg2[2], 4)

TEB* gsbase
void* rsi = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143f489d0 s> *(rsi + 0x14))
    _Init_thread_header(&data_143f489d0)
    
    if (data_143f489d0 == 0xffffffff)
        zmm1 = sub_140b58260(&data_143f489c8, u"FullHDR", 1)
        _Init_thread_footer(&data_143f489d0)

if (data_143f489e0 s> *(rsi + 0x14))
    _Init_thread_header(&data_143f489e0)
    
    if (data_143f489e0 == 0xffffffff)
        zmm1 = sub_140b58260(&data_143f489d8, u"EncodedHDR", 1)
        _Init_thread_footer(&data_143f489e0)

bool cond:3 = (arg1[5].b & 2) == 0
int64_t* i_1 = nullptr
int32_t var_20 = 0
int64_t var_18

if (cond:3)
label_1420f558d:
    sub_1407e5270(arg1, &arg2[4], zmm1)
else
    int64_t* rcx_8 = arg1[0xe]
    
    if (rcx_8 == 0)
    label_1420f558d_1:
        sub_1407e5270(arg1, &arg2[4], zmm1)
    else
        (*(*rcx_8 + 0x130))(rcx_8, &i_1)
        int64_t rax_17 = sx.q(var_20)
        
        if (rax_17.d == 0)
        label_1420f558d_2:
            sub_1407e5270(arg1, &arg2[4], zmm1)
        else
            for (int64_t* i = i_1; i != &i[rax_17]; i = &i[1])
                if (*i == data_143f489c8)
                    goto label_1420f558d_2
            
            var_18 = 0
            int64_t var_10_1 = 0
            sub_1407e5270(arg1, &var_18, zmm1)
            int64_t rcx_10 = var_18
            
            if (rcx_10 != 0)
                zmm1 = sub_140a74f90(rcx_10)

int64_t rax_19 = sx.q(var_20)

if (rax_19.d == 0)
label_1420f55fa:
    
    if ((arg1[5].b & 2) != 0 && arg1[0xe] != 0 && arg2[0xa] == 0 && arg2[6] s> 0)
        zmm1 = sub_141f3b470(&arg2[4], *arg2, arg2[2], &arg2[8])
    
    sub_1407e5270(arg1, &arg2[8], zmm1)
else
    int64_t* i_2 = i_1
    void* rdx_6 = &i_2[rax_19]
    
    if (i_2 != rdx_6)
        while (*i_2 != data_143f489d8)
            i_2 = &i_2[1]
            
            if (i_2 == rdx_6)
                goto label_1420f55c3
        
        goto label_1420f55fa
    
label_1420f55c3:
    var_18 = 0
    int64_t var_10_2 = 0
    sub_1407e5270(arg1, &var_18, zmm1)
    int64_t rcx_13 = var_18
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)

if ((arg1[5].b & 1) != 0)
    *(arg2 + 0x38) = sx.q(arg2[0xb]) + sx.q(arg2[7])

int64_t* i_3 = i_1

if (i_3 != 0)
    sub_140a74f90(i_3)

return arg1
