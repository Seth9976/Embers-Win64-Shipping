// 函数: sub_141e72690
// 地址: 0x141e72690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = data_143f5b298
int64_t* rbx
int64_t* arg_8 = rbx
char rax = 0
int32_t arg_10 = 0
int64_t var_28

if (rcx == 0)
    rbx.b = 0
else
    int64_t* rax_1 = sub_1423ddaf0(rcx, &var_28)
    rcx = data_143f5b298
    
    if (rcx == 0)
        rax = 1
        rbx.b = 0
    else if (sub_1423dcff0(rcx) == 0 || rax_1[1] == 0)
        rcx = data_143f5b298
        rax = 1
        rbx.b = 0
    else
        rcx = data_143f5b298
        rax = 1
        rbx.b = 1

int64_t var_20
int32_t var_18

if ((rax & 1) != 0 && rcx != 0)
    if (sub_1423dcff0(rcx) != 0 && var_20 != 0)
        void* rax_4 = sub_1423dcff0(data_143f5b298)
        
        if (rax_4 != 0)
            sub_141e797e0(rax_4, zx.q(var_18), var_28)
    
    rcx = data_143f5b298

if (rbx.b != 0)
    int64_t* rbx_1 = sub_1423ddaf0(rcx, &var_28)[1]
    int64_t rdi_1 = *rbx_1
    sub_140b19e60()
    (*(rdi_1 + 8))(rbx_1, 0, u"audiomemreport", &data_1439a8bd0)
    void* rcx_4 = data_143f5b298
    
    if (rcx_4 != 0 && sub_1423dcff0(rcx_4) != 0 && var_20 != 0)
        void* rax_7 = sub_1423dcff0(data_143f5b298)
        
        if (rax_7 != 0)
            sub_141e797e0(rax_7, zx.q(var_18), var_28)

var_28 = 0
int32_t i_2 = 0
int32_t var_18_1 = 0xffffffff
void* result = sub_140d3cc80(sub_1425a4180(), &var_28, 1, 0x10, 0)
int32_t i = i_2
int32_t i_1 = var_18_1 + 1
int64_t rcx_8 = var_28
int32_t i_3 = i_1

if (i_1 s< i)
    do
        result = sx.q(i_1)
        
        if (*(rcx_8 + (result << 3)) != 0)
            break
        
        result = zx.q(i_1 + 1)
        i_3 = result.d
        i_1 = result.d
    while (result.d s< i)

while (i_1 s>= 0)
    if (i_1 s>= i)
        break
    
    void* rbx_2 = *(rcx_8 + (sx.q(i_1) << 3))
    
    if (rbx_2 != 0)
        if (sub_14236bf90(rbx_2) != 0)
            sub_142371f90(rbx_2)
        
        rcx_8 = var_28
        i = i_2
        i_1 = i_3
    
    result = zx.q(i_1 + 1)
    i_3 = result.d
    i_1 = result.d
    
    if (result.d s< i)
        do
            result = sx.q(i_1)
            
            if (*(rcx_8 + (result << 3)) != 0)
                break
            
            result = zx.q(i_1 + 1)
            i_3 = result.d
            i_1 = result.d
        while (result.d s< i)

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
