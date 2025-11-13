// 函数: sub_14092da80
// 地址: 0x14092da80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x30)
void*** rsi

if (rax == 0)
    rsi = nullptr
else
    rsi = sub_14091a260(rax)

sub_14091c220(arg2, &rsi[3])
int64_t* rax_2 = sub_14091c220(arg2, arg3 + 0x18)

if (rax_2[2].b != 0)
    rax_2[2].b = 1
else
    int64_t rax_3 = sx.q(*(rax_2 + 0xc))
    
    if ((rax_3 + 4).d s> rax_2[1].d)
        rax_2[2].b = 1
    else
        int64_t rcx_4 = *rax_2
        uint32_t r8_5 = ((zx.d(*(rax_3 + rcx_4 + 1)) | zx.d(*(rax_3 + rcx_4)) << 8) << 8
            | zx.d(*(rax_3 + rcx_4 + 2))) << 8 | zx.d(*(rax_3 + rcx_4 + 3))
        *(arg3 + 0xa8) = r8_5
        int64_t rcx_5 = sx.q(*(rax_2 + 0xc))
        int32_t rax_8 = (rcx_5 + 4).d
        *(rax_2 + 0xc) = rax_8
        
        if (rax_2[2].b != 0 || rax_8 + 4 s> rax_2[1].d)
            rax_2[2].b = 1
        else
            void* rdx_4 = rcx_5 + *rax_2
            *(arg3 + 0xac) =
                ((zx.d(*(rdx_4 + 4)) << 8 | zx.d(*(rdx_4 + 5))) << 8 | zx.d(*(rdx_4 + 6))) << 8
                | zx.d(*(rdx_4 + 7))
            *(rax_2 + 0xc) += 4

void*** rax_13 = j_sub_140a82f30(0x18)
void*** rbx = rax_13

if (rax_13 == 0)
    rbx = nullptr
else
    rax_13[1].d = 1
    *(rax_13 + 0xc) = 1
    *rbx = &data_142d42e98
    rbx[2] = rsi

void**** rdi = &rsi[1]

if (rsi == 0)
    rdi = nullptr

if (rdi != 0)
    void* rax_14
    
    if (*rdi != 0)
        rax_14 = rdi[1]
    
    if (*rdi == 0 || rax_14 == 0 || *(rax_14 + 8) s<= 0)
        if (rbx != 0)
            rbx[1].d += 1
        
        *rdi = rsi
        int64_t* rcx_13 = rdi[1]
        
        if (rbx != rcx_13)
            if (rbx != 0)
                *(rbx + 0xc) += 1
                rcx_13 = rdi[1]
            
            if (rcx_13 != 0)
                int32_t temp6_1 = *(rcx_13 + 0xc)
                *(rcx_13 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rcx_13 + 8))(rcx_13, 1)
            
            rdi[1] = rbx
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp5_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*rbx)[1](rbx, 1)

void*** var_48

if (arg3 + 8 == &var_48)
label_14092dc7a:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rbx)[1](rbx, 1)
else
    *(arg3 + 8) = rsi
    void*** rdi_1 = *(arg3 + 0x10)
    
    if (rbx == rdi_1)
        goto label_14092dc7a
    
    *(arg3 + 0x10) = rbx
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*rdi_1)[1](rdi_1, 1)

void*** rax_21 = j_sub_140a82f30(0x48)
void*** rsi_1

if (rax_21 == 0)
    rsi_1 = nullptr
else
    rsi_1 = sub_140919570(rax_21)

void arg_18
int64_t* rax_24 = sub_140fc6160(sub_140b58260(&arg_18, u"WINDOWS", 1))
int64_t r8_6 = *rax_24
int64_t* rax_25 = (*(r8_6 + 0x90))(rax_24, &var_48, r8_6)
int64_t* rbx_1 = rax_25[1]

if (rbx_1 != 0)
    rbx_1[1].d += 1

void var_38

if (&rsi_1[1] == &var_38)
label_14092dd42:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp9_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
else
    rsi_1[1] = *rax_25
    int64_t* rdi_2 = rsi_1[2]
    
    if (rbx_1 == rdi_2)
        goto label_14092dd42
    
    rsi_1[2] = rbx_1
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp12_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t temp11_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*var_40 + 8))(var_40, 1)

sub_14091c220(arg2, &rsi_1[6])
sub_14091c090(arg2, rsi_1[1])
void*** rax_31
char r9_1
rax_31, r9_1 = j_sub_140a82f30(0x18)
void*** rbx_3 = rax_31

if (rax_31 == 0)
    rbx_3 = nullptr
else
    rax_31[1].d = 1
    *(rax_31 + 0xc) = 1
    *rbx_3 = &data_142d42e98
    rbx_3[2] = rsi_1

var_48 = rsi_1
void*** var_40_1 = rbx_3

if (arg3 + 0x98 == &var_48)
label_14092de50:
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            r9_1 = (**rbx_3)(rbx_3)
            int32_t temp14_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp14_1 == 1)
                r9_1 = (*rbx_3)[1](rbx_3, 1)
else
    *(arg3 + 0x98) = rsi_1
    int64_t* rdi_3 = *(arg3 + 0xa0)
    var_48 = nullptr
    
    if (rbx_3 == rdi_3)
        goto label_14092de50
    
    void*** var_40_2 = nullptr
    *(arg3 + 0xa0) = rbx_3
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            r9_1 = (**rdi_3)(rdi_3)
            int32_t temp16_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp16_1 == 1)
                r9_1 = (*(*rdi_3 + 8))(rdi_3, 1)
        
        rbx_3 = var_40_2
        goto label_14092de50

return sub_14092deb0(arg1, arg2, arg3 + 0x28, r9_1) __tailcall
