// 函数: sub_140ebae10
// 地址: 0x140ebae10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg3
void* var_78
(*(*rcx + 8))(rcx, &var_78)
int64_t* rcx_1 = *arg3
void* var_68
(*(*rcx_1 + 0x10))(rcx_1, &var_68)
void* rbx_1 = var_78
int128_t var_48

if (rbx_1 == 0)
    int128_t var_58 = zx.o(0)
    void* i = var_58.q
    int32_t rsi_1 = 0
    int64_t* r15_1 = var_58:8.q
    
    do
        void* rax_5 = var_68
        
        if (rsi_1 s>= *(rax_5 + 0x30))
            break
        
        void** rax_6 = sub_140ebae10(&var_48, arg2, (sx.q(rsi_1) << 4) + *(rax_5 + 0x28))
        
        if (&var_58 != rax_6)
            i = *rax_6
            int64_t* rbx_3 = r15_1
            *rax_6 = nullptr
            int64_t* rcx_6 = rax_6[1]
            
            if (rcx_6 != r15_1)
                rax_6[1] = 0
                r15_1 = rcx_6
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp7_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
        
        int64_t* rbx_4 = var_48:8.q
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t temp4_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
        
        rsi_1 += 1
    while (i == 0)
    
    *arg1 = i
    arg1[1] = r15_1
    goto label_140ebafe4

int64_t* r11_1 = *(rbx_1 + 0x20)
int64_t* rcx_2 = r11_1
int32_t rax_2 = arg2[1].d
void* r8_2 = &r11_1[sx.q(*(rbx_1 + 0x28)) * 2]
var_48 = *arg2
int32_t var_38_1 = rax_2
int32_t rcx_3

if (r11_1 == r8_2)
label_140ebaea8:
    rcx_3 = -1
else
    int32_t rdx_2 = var_48:8.d
    
    while (true)
        if ((*(rcx_2 + 0xc) & var_48:0xc.d) != 0 && *rcx_2 == var_48.q)
            if (rax_2.b == 0)
                if (rdx_2 == rcx_2[1].d)
                    rcx_3 = ((rcx_2 - r11_1) s>> 4).d
                    break
            else if (rdx_2 == 0xffffffff || rdx_2 == rcx_2[1].d)
                rcx_3 = ((rcx_2 - r11_1) s>> 4).d
                break
        
        rcx_2 = &rcx_2[2]
        
        if (rcx_2 == r8_2)
            goto label_140ebaea8

int64_t* var_70
int64_t* var_60
int64_t* rbx_2

if (rcx_3 == 0xffffffff)
    *arg1 = nullptr
    arg1[1] = 0
label_140ebafe4:
    rbx_2 = var_60
    
    if (rbx_2 != 0)
    label_140ebafed:
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp3_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
        
        goto label_140ebb013
    
label_140ebb013:
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            (**var_70)(var_70)
            int32_t temp6_1 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_70 + 8))(var_70, 1)
else
    *arg1 = rbx_1
    rbx_2 = var_60
    arg1[1] = var_70
    var_70 = nullptr
    var_78 = nullptr
    
    if (rbx_2 != 0)
        goto label_140ebafed
return arg1
