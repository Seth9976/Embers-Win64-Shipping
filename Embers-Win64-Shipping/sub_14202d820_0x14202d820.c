// 函数: sub_14202d820
// 地址: 0x14202d820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x4f]
(*(*rcx + 0x700))(rcx)
int64_t* var_68
sub_1424373a0((*(*arg1 + 0x150))(arg1), &var_68)
int32_t i_3
int32_t i = i_3

while (i s>= 0)
    int64_t* rdx_1 = var_68
    
    if (i s>= rdx_1[1].d)
        break
    
    void* rax_4 = sub_140d3c6e0(*rdx_1 + (sx.q(i) << 3))
    
    if (rax_4 != 0 && *(rax_4 + 0x250) == 0 && sub_1424b2b60(arg1, rax_4) != 0)
        int64_t r8_1 = *arg1
        (*(r8_1 + 0x778))(arg1, rax_4, r8_1)
    
    i = i_3 + 1
    i_3 = i

void* rax_8 = (*(*arg1 + 0x150))(arg1)
sub_1423d25f0(data_143f5b298, rax_8)
int64_t* rax_9 = sub_141dcc7c0(arg1)
int64_t rdx_5 = *rax_9
(*(rdx_5 + 0x650))(rax_9, rdx_5)
int64_t* rax_10 = sub_141dcc7c0(arg1)
int64_t rdx_6 = *rax_10
(*(rdx_6 + 0x658))(rax_10, rdx_6)
var_68 = nullptr
i_3.q = 0
sub_1405947f0(&var_68, 7)
int32_t var_60 = i_3 + 7
int32_t var_5c

if (i_3 + 7 s> var_5c)
    sub_140594770(&var_68)

int64_t* rbx_2 = var_68
UnDecorator::getReferenceType(rbx_2, u"BugLoc", 0xe)
int64_t var_48
int64_t var_28
sub_142035500(&var_48, sub_140596d10(&var_28, &arg1[0x44]), &var_68)

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

var_68 = nullptr
var_60.q = 0
sub_1405947f0(&var_68, 7)
int32_t i_4 = var_60 + 7

if (var_60 + 7 s> var_5c)
    sub_140594770(&var_68)

int64_t* rbx_3 = var_68
UnDecorator::getReferenceType(rbx_3, u"BugRot", 0xe)
int64_t var_58
sub_142035500(&var_58, sub_140596d10(&var_28, &arg1[0x44]), &var_68)

if (rbx_3 != 0)
    sub_140a74f90(rbx_3)

int32_t var_50
int32_t var_40

if (var_40 s> 1 || var_50 s> 1)
    sub_1424373a0((*(*arg1 + 0x150))(arg1), &var_68)
    int32_t i_1 = i_4
    
    while (i_1 s>= 0)
        int64_t* rdx_14 = var_68
        
        if (i_1 s>= rdx_14[1].d)
            break
        
        void* rax_18 = sub_140d3c6e0(*rdx_14 + (sx.q(i_1) << 3))
        
        if (rax_18 != 0)
            int64_t* rcx_29 = *(rax_18 + 0x338)
            
            if (rcx_29 != 0)
                (*(*rcx_29 + 0x3a0))(rcx_29, &var_48, &var_58)
        
        i_1 = i_4 + 1
        i_4 = i_1

int64_t result = (*(*arg1 + 0x7a0))(arg1)

if (result.b != 0)
    result = sub_141dc8400(arg1)
    
    if (result != 0)
        int64_t* rax_22 = sub_141dc8400(arg1)
        int64_t rdx_16 = *arg1
        var_68 = nullptr
        i_4.q = 0
        int64_t rdi_1 = *rax_22
        int64_t* rax_24 = sub_142436cb0((*(rdx_16 + 0x150))(arg1, rdx_16), &var_28)
        int64_t rdx_18 = *arg1
        int64_t var_38
        result = (*(rdi_1 + 0x2f0))(rax_22, 
            sub_142436cb0((*(rdx_18 + 0x150))(arg1, rdx_18), &var_38), rax_24, &var_68, var_68, i_4)
        int64_t rcx_38 = var_38
        
        if (rcx_38 != 0)
            result = sub_140a74f90(rcx_38)
        
        int64_t rcx_39 = var_28
        
        if (rcx_39 != 0)
            result = sub_140a74f90(rcx_39)
        
        int32_t i_5 = i_4
        int64_t* rbx_5 = var_68
        
        if (i_5 != 0)
            int32_t i_2
            
            do
                int64_t rcx_40 = *rbx_5
                
                if (rcx_40 != 0)
                    result = sub_140a74f90(rcx_40)
                
                rbx_5 = &rbx_5[2]
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
            rbx_5 = var_68
        
        if (rbx_5 != 0)
            result = sub_140a74f90(rbx_5)

int64_t rcx_42 = var_58

if (rcx_42 != 0)
    result = sub_140a74f90(rcx_42)

int64_t rcx_43 = var_48

if (rcx_43 == 0)
    return result

return sub_140a74f90(rcx_43)
