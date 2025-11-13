// 函数: sub_1423cc690
// 地址: 0x1423cc690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a84c80(0, 0x20, 0)

if (rax != 0)
    *rax = &data_1433409f8
    rax[1] = sub_142436e50
    rax[3] = sub_140a387b0()
    void** r8_1 = *rax
    r8_1[8](rax, &data_143de8480, r8_1)
else if (data_143de8488 != 0)
    int64_t* rcx_2 = data_143de8480
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x38))(rcx_2, 0)
        int64_t rcx_3 = data_143de8480
        
        if (rcx_3 != 0)
            data_143de8480 = sub_140a84c80(rcx_3, 0, 0)
        
        data_143de8488 = 0

if (rax != 0)
    (*rax)[7](rax, 0)
    int64_t rax_5 = sub_140a84c80(rax, 0, 0)
    
    if (rax_5 != 0)
        sub_140a74f90(rax_5)

TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f5b5f8 s> *rdi_1)
    _Init_thread_header(&data_143f5b5f8)
    
    if (data_143f5b5f8 == 0xffffffff)
        int64_t* rcx_18 = data_143db18d0
        
        if (rcx_18 == 0)
            sub_140a53c40()
            rcx_18 = data_143db18d0
        
        int64_t r8_4
        r8_4.b = 1
        data_143f5b5f0 = (*(*rcx_18 + 0xb0))(rcx_18, u"r.Shadow.CacheWPOPrimitives", r8_4)
        _Init_thread_footer(&data_143f5b5f8)

int64_t* var_38 = nullptr
void*** rax_8 = sub_140a84c80(0, 0x20, 0)
var_38 = rax_8
int32_t var_30 = 2

if (rax_8 != 0)
    *rax_8 = &data_142d43dd8
    rax_8[1] = sub_1414220c0
    rax_8[3] = sub_140a387b0()
    *rax_8 = &data_142d43e30

int64_t* rcx_8 = data_143f5b5f0
(*(*rcx_8 + 0xa8))(rcx_8, &var_38)
int64_t* rax_12

if (var_30 == 0)
    rax_12 = var_38
label_1423cc82d:
    
    if (rax_12 != 0)
        sub_140a74f90(rax_12)
else
    int64_t* rcx_9 = var_38
    
    if (rcx_9 != 0)
        (*(*rcx_9 + 0x38))(rcx_9, 0)
        rax_12 = var_38
        
        if (rax_12 != 0)
            rax_12 = sub_140a84c80(rax_12, 0, 0)
            var_38 = rax_12
        
        int32_t var_30_1 = 0
        goto label_1423cc82d

if (data_143f5b608 s> *rdi_1)
    _Init_thread_header(&data_143f5b608)
    
    if (data_143f5b608 == 0xffffffff)
        int64_t* rcx_17 = data_143db18d0
        
        if (rcx_17 == 0)
            sub_140a53c40()
            rcx_17 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        data_143f5b600 = (*(*rcx_17 + 0xb0))(rcx_17, u"r.ShowMaterialDrawEvents", r8_3)
        _Init_thread_footer(&data_143f5b608)

if (data_143f5b600 != 0)
    int64_t* var_28 = nullptr
    void*** rax_14 = sub_140a84c80(0, 0x20, 0)
    var_28 = rax_14
    int32_t var_20_1 = 2
    
    if (rax_14 != 0)
        *rax_14 = &data_142d43dd8
        rax_14[1] = sub_1414220c0
        rax_14[3] = sub_140a387b0()
        *rax_14 = &data_142d43e30
    
    int64_t* rcx_12 = data_143f5b600
    (*(*rcx_12 + 0xa8))(rcx_12, &var_28)
    int64_t* rax_18
    
    if (var_20_1 == 0)
        rax_18 = var_28
    label_1423cc8e4:
        
        if (rax_18 != 0)
            sub_140a74f90(rax_18)
    else
        int64_t* rcx_13 = var_28
        
        if (rcx_13 != 0)
            (*(*rcx_13 + 0x38))(rcx_13, 0)
            rax_18 = var_28
            
            if (rax_18 != 0)
                rax_18 = sub_140a84c80(rax_18, 0, 0)
                var_28 = rax_18
            
            int32_t var_20_2 = 0
            goto label_1423cc8e4

data_14399fa38 = sub_14239a090
data_14399fa40 = sub_142396d30
return sub_1421f6d00() __tailcall
