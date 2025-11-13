// 函数: sub_140640530
// 地址: 0x140640530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0
int64_t* rax = sub_1424c7800()
int64_t* r15 = rax[0x23]

if (r15 == 0)
    int64_t r8_1 = *rax
    (*(r8_1 + 0x390))(rax, arg3, r8_1)
    r15 = rax[0x23]
    
    if (r15 == 0)
        sub_140627440(arg1)
        sub_140627440(arg2)
        int64_t result
        result.b = 0
        return result

int64_t r13
r13.b = 0
void** rax_1 = sub_1417b0b00(r15)
void* rbx_1 = *rax_1
void* rbp = rbx_1 + sx.q(rax_1[1].d) * 0x28

if (rbx_1 != rbp)
    int64_t rdi
    int64_t arg_10 = rdi
    
    do
        int64_t var_48
        int64_t* rax_3 = sub_140b63b70(rbx_1, &var_48)
        int16_t* rdx_1
        
        if (arg1[1].d == 0)
            rdx_1 = &data_142d40450
        else
            rdx_1 = *arg1
        
        int16_t* const rcx_6
        
        if (rax_3[1].d == 0)
            rcx_6 = &data_142d40450
        else
            rcx_6 = *rax_3
        
        if (sub_140a54510(rcx_6, rdx_1) != 0 || *(rbx_1 + 0x10) != arg1[4])
            rdi.b = 0
        else
            rdi.b = 1
        
        int64_t rcx_7 = var_48
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        if (rdi.b != 0)
            char rdx_3 = sub_140627710(rbx_1 + 0x10, &arg2[4])
            *(rbx_1 + 8) = arg2[7].d
            r13.b = 1
            sub_14241ecf0(r15, rdx_3)
            int32_t var_38_1 = 0xffffffff
            var_48 = 0
            int32_t var_40_1 = 0
            sub_140d3cc80(sub_142575670(), &var_48, 1, 0x10, 0)
            int32_t rcx_11 = var_40_1
            int32_t i = var_38_1 + 1
            int64_t r8_2 = var_48
            int32_t i_1 = i
            
            if (i s< rcx_11)
                while (*(r8_2 + (sx.q(i) << 3)) == 0)
                    int32_t i_2 = i + 1
                    i_1 = i_2
                    i = i_2
                    
                    if (i_2 s>= rcx_11)
                        break
            
            while (i s>= 0)
                if (i s>= rcx_11)
                    break
                
                sub_14240ee90(*(r8_2 + (sx.q(i) << 3)), 1)
                rcx_11 = var_40_1
                i = i_1 + 1
                r8_2 = var_48
                i_1 = i
                
                if (i s< rcx_11)
                    while (*(r8_2 + (sx.q(i) << 3)) == 0)
                        int32_t i_3 = i + 1
                        i_1 = i_3
                        i = i_3
                        
                        if (i_3 s>= rcx_11)
                            break
            
            if (r8_2 != 0)
                sub_140a74f90(r8_2)
            
            break
        
        rbx_1 += 0x28
    while (rbx_1 != rbp)

int64_t* rbx_2 = arg1[6]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t rcx_17 = arg1[2]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int64_t rcx_18 = *arg1

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int64_t* rbx_3 = arg2[6]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp3_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

int64_t rcx_21 = arg2[2]

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int64_t rcx_22 = *arg2

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

return zx.q(r13.b)
