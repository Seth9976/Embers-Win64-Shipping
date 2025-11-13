// 函数: sub_14181f5b0
// 地址: 0x14181f5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1418209d0(arg1, arg2)
int128_t var_68
int64_t* rcx
int64_t* r8

if (arg1[0xe].d - 1 u<= 2)
    int64_t* rbx_1 = arg1[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    var_68.q = *arg1
    r8 = rbx_1
    var_68:8.q = rbx_1
    rcx = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)()
            r8 = rbx_1
            rcx = rbx_1
            int32_t rax_5 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_5 == 1)
                (*(*rbx_1 + 8))(rcx, 1, r8)
                r8 = rbx_1
                rcx = rbx_1
else
    r8 = nullptr
    var_68 = zx.o(0)
    rcx = nullptr

arg1[0xf] = var_68.q
arg1[0x10] = var_68:8.q

if (r8 != 0)
    rcx[1].d += 1
    rcx[1].d -= 1
    
    if (rcx[1].d == 1)
        int64_t* rbx_2 = var_68:8.q
        (**rbx_2)(rbx_2)
        int32_t rax_11 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rax_11 == 1)
            int64_t* rcx_2 = var_68:8.q
            (*(*rcx_2 + 8))(rcx_2, 1)

int128_t var_58
int64_t* rcx_3
int64_t* r8_1

if (arg1[0xe].d u<= 2)
    int64_t* rbx_3 = arg1[3]
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    var_58.q = arg1[2]
    r8_1 = rbx_3
    var_58:8.q = rbx_3
    rcx_3 = rbx_3
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)()
            r8_1 = rbx_3
            rcx_3 = rbx_3
            int32_t rax_16 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (rax_16 == 1)
                (*(*rbx_3 + 8))(rcx_3, 1, r8_1)
                r8_1 = rbx_3
                rcx_3 = rbx_3
else
    r8_1 = nullptr
    var_58 = zx.o(0)
    rcx_3 = nullptr

arg1[0x11] = var_58.q
arg1[0x12] = var_58:8.q

if (r8_1 != 0)
    rcx_3[1].d += 1
    rcx_3[1].d -= 1
    
    if (rcx_3[1].d == 1)
        int64_t* rbx_4 = var_58:8.q
        (**rbx_4)(rbx_4)
        int32_t rax_22 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (rax_22 == 1)
            int64_t* rcx_5 = var_58:8.q
            (*(*rcx_5 + 8))(rcx_5, 1)

arg1[0x13] = 0
arg1[0x14] = 0
void* rcx_6 = &arg1[0x15]
*(rcx_6 + 0x10) = 0
*(rcx_6 + 0x18) = 0
*(rcx_6 + 0x1c) = 0x80
void* rax_24 = *(rcx_6 + 0x10)

if (rax_24 != 0)
    rcx_6 = rax_24

*rcx_6 = 0
*(rcx_6 + 8) = 0
void* rcx_7 = &arg1[0x1f]
arg1[0x19].d = 0xffffffff
*(arg1 + 0xcc) = 0
arg1[0x1b] = 0
arg1[0x1c].d = 0
arg1[0x1d] = 0
arg1[0x1e] = 0
*(rcx_7 + 0x10) = 0
*(rcx_7 + 0x18) = 0
*(rcx_7 + 0x1c) = 0x80
void* rax_25 = *(rcx_7 + 0x10)

if (rax_25 != 0)
    rcx_7 = rax_25

*rcx_7 = 0
*(rcx_7 + 8) = 0
arg1[0x23].d = 0xffffffff
*(arg1 + 0x11c) = 0
arg1[0x25] = 0
arg1[0x26].d = 0
sub_1418235f0(&arg1[0x13], &arg1[4])

if (arg1[0x14].d == *(arg1 + 0xcc))
    int64_t* rcx_9 = arg1[0x11]
    
    if (rcx_9 == 0)
        rcx_9 = arg1[0xf]
    
    (*(*rcx_9 + 0xa8))(rcx_9, &arg1[0x13])

int32_t var_48
sub_140598750(&arg1[0x13], &var_48)
int64_t* var_40
*var_40 = 0
var_40[1] = 0
var_40[2].d = 0xffffffff
void arg_8
sub_14059a6d0(&arg1[0x13], &arg_8, sub_1405969c0(0, &data_142d40450), var_40, var_48, nullptr)

if (arg1[0xe].d != 3)
    int64_t* rcx_13 = arg1[0x11]
    (*(*rcx_13 + 0x1a8))(rcx_13, &arg1[0x13], &arg1[0x1d])

return arg1
