// 函数: sub_141ba9d70
// 地址: 0x141ba9d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
void* rdi = &arg1[0xa0]
int32_t rsi = arg4
int64_t* var_88
sub_141bb2520(rdi, &var_88, arg2)
int64_t* r14 = var_88
int64_t* var_80
int128_t var_58
int64_t* rbx

if (r14 != 0)
    rbx = var_80
else
    int64_t* rax_2 = (*(*arg1 + 0x2a8))(arg1, &var_58, *arg2)
    int64_t* rdi_1 = rax_2[1]
    r14 = *rax_2
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    rbx = var_80
    var_88 = r14
    int64_t* rsi_1 = rbx
    
    if (rdi_1 != rbx)
        rbx = rdi_1
        var_80 = rbx
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp4_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
    else if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t* rdi_2 = var_58:8.q
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp5_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)
    
    rsi = arg_20
    rdi = &arg1[0xa0]

(*(*r14 + 0x10))(r14, zx.q(arg3))
var_58 = var_88.o

if (rbx != 0)
    rbx[1].d += 1

int128_t zmm0 = sub_141bbed80(rdi, *arg2, &var_58)
int64_t* var_68
(*(*r14 + 0x50))(r14, &var_68)
sub_140e1a0f0(var_68)
var_88.o = sub_140e25880(var_68, arg5, zmm0)

if (arg3 s< rsi)
    if (rbx != 0)
        rbx[1].d += 1
    
    sub_140f7b210(arg1, &var_88)
else
    if (rbx != 0)
        rbx[1].d += 1
    
    sub_140f6a4d0(arg1, &var_88)

if (var_80 != 0)
    var_80[1].d -= 1
    
    if (var_80[1].d == 1)
        (**var_80)(var_80)
        int32_t temp7_1 = *(var_80 + 0xc)
        *(var_80 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*var_80 + 8))(var_80, 1)

int64_t* rdi_4 = var_68

if (rdi_4[0x37].d != 0)
    int64_t* rcx_16 = rdi_4[0x36]
    
    if (rcx_16 != 0 && (*(*rcx_16 + 0x28))(rcx_16) != 0)
        int64_t* rcx_17
        
        if (rdi_4[0x37].d == 0)
            rcx_17 = nullptr
        else
            rcx_17 = rdi_4[0x36]
        
        (*(*rcx_17 + 0x48))(rcx_17, &arg_20)
        rdi_4[0x35].b = arg_20.b

int64_t* rax_16

if ((rdi_4[0x35].b & 0x19) == 0)
    int64_t arg_8
    rax_16 = &arg_8
    arg_8 = data_143dbb1f0
else
    rax_16 = sub_140e13cf0(var_68, &var_88)

void var_78
sub_140f66410(&var_78, arg1[0x9b].d, rax_16)
int64_t* var_60

if (var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        (**var_60)(var_60)
        int32_t temp10_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*var_60 + 8))(var_60, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp11_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int32_t var_74
int512_t result
result.o = var_74
return result
