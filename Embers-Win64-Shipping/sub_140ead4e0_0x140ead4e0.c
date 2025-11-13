// 函数: sub_140ead4e0
// 地址: 0x140ead4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_5
int64_t i_6 = i_5
uint64_t rbp = 0
int64_t* r12 = arg1 + 0x78
void* r15 = nullptr
int32_t arg_18 = 0
int32_t i_4 = 0
int64_t* var_78 = r12
int32_t r8 = 0
void* var_88 = nullptr
int32_t i = 0
int64_t var_80 = 0
void* r13 = arg1

if (r12[1].d s> 0)
    do
        int64_t* rdi_2 = *r12 + rbp
        int64_t rcx = *rdi_2
        
        if (rcx != 0)
            void* rax_1 = rdi_2[1]
            
            if (rax_1 != 0 && *(rax_1 + 8) s> 0)
                i_5 = sx.q(i_4)
                i_4 = (i_5 + 1).d
                var_80.d = i_4
                
                if (i_4 s> r8)
                    sub_1405a4f90(&var_88)
                    rcx = *rdi_2
                    r8 = var_80:4.d
                    i_4 = var_80.d
                    r15 = var_88
                
                int64_t rax_3 = i_5 * 2
                *(r15 + (rax_3 << 3)) = rcx
                void* rcx_2 = rdi_2[1]
                *(r15 + (rax_3 << 3) + 8) = rcx_2
                
                if (rcx_2 != 0)
                    *(rcx_2 + 0xc) += 1
        
        i += 1
        rbp += 0x10
    while (i s< r12[1].d)
    
    rbp = 0

sub_140e998a0(r12, &var_88)

if (i_4 != 0)
    int64_t* rdi_3 = r15 + 8
    int32_t i_1
    
    do
        int64_t* rcx_4 = *rdi_3
        
        if (rcx_4 != 0)
            int32_t temp1_1 = *(rcx_4 + 0xc)
            *(rcx_4 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rcx_4 + 8))(rcx_4, 1)
        
        rdi_3 = &rdi_3[2]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

if (r15 != 0)
    arg3 = sub_140a74f90(r15)

i_5.b = 1
int32_t i_2 = 0
int32_t i_3 = 0
void* rcx_6 = nullptr
var_88 = nullptr

while (i_2 s< *(r13 + 0x80))
    void* rcx_7 = rcx_6 + *r12
    int64_t* r15_1 = *(rcx_7 + 8)
    int64_t* var_90_1 = r15_1
    
    if (r15_1 == 0)
        goto label_140ead668
    
    int32_t rax_5 = r15_1[1].d
    void* var_70
    int32_t j_6
    void* var_60
    int64_t* rax_8
    int64_t* r13_1
    
    if (rax_5 == 0)
        r15_1 = nullptr
        var_90_1 = nullptr
    label_140ead668:
        rbp = zx.q(rbp.d) | 2
        j_6 = 0
        rax_8 = &var_70
        r13_1 = nullptr
    else
        r15_1[1].d = rax_5 + 1
        
        if (r15_1 == 0)
            goto label_140ead668
        
        int64_t* rcx_8 = *rcx_7
        
        if (rcx_8 == 0)
            goto label_140ead668
        
        rbp = zx.q(rbp.d) | 1
        rax_8 = (*(*rcx_8 + 0x260))(rcx_8, &var_60)
        r13_1 = *rax_8
    
    *rax_8 = 0
    int32_t j_5 = rax_8[1].d
    rax_8[1] = 0
    
    if ((rbp.b & 2) != 0)
        int32_t j_3 = j_6
        void* rbp_2 = var_70
        
        if (j_3 != 0)
            int64_t* rdi_4 = rbp_2 + 8
            int32_t j
            
            do
                int64_t* rbx = *rdi_4
                
                if (rbx != 0)
                    rbx[1].d -= 1
                    
                    if (rbx[1].d == 1)
                        (**rbx)(rbx)
                        int32_t temp6_1 = *(rbx + 0xc)
                        *(rbx + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*rbx + 8))(rbx, 1)
                
                rdi_4 = &rdi_4[2]
                j = j_3
                j_3 -= 1
            while (j != 1)
        
        if (rbp_2 != 0)
            arg3 = sub_140a74f90(rbp_2)
        
        rbp = zx.q(rbp.d) & 0xfffffffd
    
    if ((rbp.b & 1) != 0)
        int32_t j_7
        int32_t j_4 = j_7
        rbp = zx.q(rbp.d) & 0xfffffffe
        
        if (j_4 != 0)
            int64_t* rdi_6 = var_60 + 8
            int32_t j_1
            
            do
                int64_t* rbx_1 = *rdi_6
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp10_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp10_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                rdi_6 = &rdi_6[2]
                j_1 = j_4
                j_4 -= 1
            while (j_1 != 1)
        
        void* rcx_14 = var_60
        
        if (rcx_14 != 0)
            arg3 = sub_140a74f90(rcx_14)
    
    int32_t rbx_2 = 0
    
    if (i_5.b != 0)
        int64_t* rdi_7 = r13_1
        
        while (rbx_2 s< j_5)
            void var_98
            int32_t* rax_13 = sub_140e10ae0(arg2, &var_98, &r13_1[sx.q(rbx_2) * 2])
            char rax_14
            
            if (*rax_13 == 0xffffffff)
                rax_14 = sub_140eec340(*rdi_7, arg3)
            
            if (*rax_13 != 0xffffffff || rax_14 != 0)
                i_5.b = 1
            else
                i_5.b = 0
            
            rbx_2 += 1
            rdi_7 = &rdi_7[2]
            
            if (i_5.b == 0)
                break
        
        r15_1 = var_90_1
    
    if (j_5 != 0)
        void* rdi_8 = &r13_1[1]
        int32_t j_2
        
        do
            int64_t* rbx_3 = *rdi_8
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp12_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp12_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
            
            rdi_8 += 0x10
            j_2 = j_5
            j_5 -= 1
        while (j_2 != 1)
    
    if (r13_1 != 0)
        arg3 = sub_140a74f90(r13_1)
    
    if (r15_1 != 0)
        r15_1[1].d -= 1
        
        if (r15_1[1].d == 1)
            (**r15_1)(r15_1)
            int32_t temp11_1 = *(r15_1 + 0xc)
            *(r15_1 + 0xc) -= 1
            
            if (temp11_1 == 1)
                int64_t r8_4 = *r15_1
                (*(r8_4 + 8))(r15_1, 1, r8_4)
    
    i_2 = i_3 + 1
    r12 = var_78
    rcx_6 = var_88 + 0x10
    r13 = arg1
    i_3 = i_2
    var_88 = rcx_6
    
    if (i_5.b == 0)
        break

return zx.q(i_5.b)
