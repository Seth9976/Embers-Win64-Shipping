// 函数: sub_141d48d50
// 地址: 0x141d48d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx
int64_t* var_10 = rbx
int16_t* rsi = *arg2
int32_t rcx = 0
int16_t* var_38 = nullptr
int32_t var_30 = 0
int32_t r8 = 0
int32_t var_2c = 0
int16_t rax = *rsi

if (rax != 0x22)
    int32_t rax_3
    
    if (rsi != 0)
        if (rax == 0)
            rbx = nullptr
        else
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (rsi[rbx_1] != 0)
            
            rbx = zx.q(rbx_1.d + 1)
        
        if (rbx.d != 0)
            sub_1405947f0(&var_38, rbx.d)
            r8 = var_2c
            rcx = var_30
        
        rcx += rbx.d
        var_30 = rcx
        
        if (rcx s> r8)
            sub_140594770(&var_38)
            rcx = var_30
        
        if (rbx.d != 0)
            memcpy(var_38, rsi, rbx.d * 2)
            rcx = var_30
        
        rax_3 = rcx - 1
    
    if (rsi == 0 || rcx == 0)
        rax_3 = 0
    
    *arg2 += sx.q(rax_3) * 2
    goto label_141d48e59

int32_t arg_10 = 0
char rax_1 = j_sub_140b08930(rsi, &var_38, &arg_10)
int64_t rcx_2 = *arg2

if (rax_1 != 0)
    *arg2 = rcx_2 + (sx.q(arg_10) << 1)
    rcx = var_30
label_141d48e59:
    
    if (rcx s> 1)
        if (sub_141d49230(arg1, &var_38) != 0)
            if (arg1 != &var_38)
                rbx = sx.q(var_30)
                int16_t* rsi_1 = var_38
                int32_t r8_4 = *(arg1 + 0xc)
                arg1[1].d = rbx.d
                
                if (rbx.d != 0 || r8_4 != 0)
                    sub_1405a4c70(arg1, rbx.d, r8_4)
                    memcpy(*arg1, rsi_1, rbx.d * 2)
                else
                    *(arg1 + 0xc) = 0
            
            rbx.b = 1
        else
            if (arg3 != 0)
                int16_t* const r9_2 = &data_142d40450
                
                if (var_30 != 0)
                    r9_2 = var_38
                
                sub_140b1f850(arg3, 3, 
                    FJsonObjectWrapper::ImportTextItem - Unable to parse json: %s\n", r9_2)
            
            rbx.b = 0
    else
        arg1[1].d = 0
        
        if (*(arg1 + 0xc) != 0)
            sub_1405947f0(arg1, 0)
        
        void var_28
        
        if (&arg1[2] != &var_28)
            arg1[2] = 0
            rbx = arg1[3]
            
            if (rbx != 0)
                arg1[3] = 0
                rbx[1].d -= 1
                
                if (rbx[1].d == 1)
                    (**rbx)(rbx)
                    int32_t temp1_1 = *(rbx + 0xc)
                    *(rbx + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx + 8))(rbx, 1)
        
        rbx.b = 1
else
    sub_140b1f850(arg3, 3, u"FJsonObjectWrapper::ImportTextItem: Bad quoted string: %s\n", rcx_2)
    rbx.b = 0

int16_t* rcx_15 = var_38

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

return zx.q(rbx.b)
