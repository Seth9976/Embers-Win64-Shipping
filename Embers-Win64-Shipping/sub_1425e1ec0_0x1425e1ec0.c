// 函数: sub_1425e1ec0
// 地址: 0x1425e1ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
arg3.b = 1
char rax
int64_t r8
rax, r8 = sub_140b0f6c0(&arg_18, u"SESSION")

if (rax == 0)
    return rax

r8.b = 1
char rax_1
int64_t r8_1
rax_1, r8_1 = sub_140b0f6c0(&arg_18, u"AUTH")
int64_t* var_48
int64_t* rcx_35

if (rax_1 != 0)
    int64_t* rax_2 = sub_140b294d0(&var_48, &arg_18, 0)
    
    if (sub_1406daa50(&data_143de5500, rax_2).d == 0xffffffff)
        int64_t rbx_1 = sx.q(data_143de5508)
        int32_t rdx_2 = (rbx_1 + 1).d
        bool cond:0_1 = rdx_2 s<= data_143de550c
        data_143de5508 = rdx_2
        
        if (not(cond:0_1))
            sub_1405a4f90(&data_143de5500)
        
        sub_140596d10((rbx_1 << 4) + data_143de5500, rax_2)
    
    rcx_35 = var_48
    goto label_1425e2338

r8_1.b = 1
char rax_4
int64_t r8_2
rax_4, r8_2 = sub_140b0f6c0(&arg_18, u"DENY")
uint64_t rax_3
int64_t* var_38

if (rax_4 == 0)
    r8_2.b = 1
    int64_t r8_3
    rax_3, r8_3 = sub_140b0f6c0(&arg_18, u"DENYALL")
    
    if (rax_3.b == 0)
        r8_3.b = 1
        char rax_6
        int64_t r8_4
        rax_6, r8_4 = sub_140b0f6c0(&arg_18, u"STATUS")
        
        if (rax_6 == 0)
            r8_4.b = 1
            char rax_10
            int64_t r8_15
            rax_10, r8_15 = sub_140b0f6c0(&arg_18, u"SETNAME")
            int32_t rbx_5
            int64_t rdi_3
            
            if (rax_10 != 0)
                rax_3 = sub_140b294d0(&var_38, &arg_18, 0)
                
                if (&data_143de54d0 == rax_3)
                    goto label_1425e2334
                
                rbx_5 = *(rax_3 + 8)
                rdi_3 = *rax_3
                int32_t r8_16 = data_143de54dc
                data_143de54d8 = rbx_5
                
                if (rbx_5 == 0 && r8_16 == 0)
                    data_143de54dc = 0
                    goto label_1425e2334
                
                sub_1405a4c70(&data_143de54d0, rbx_5, r8_16)
                memcpy(data_143de54d0, rdi_3, rbx_5 * 2)
                goto label_1425e2334
            
            r8_15.b = 1
            
            if (sub_140b0f6c0(&arg_18, u"SETOWNER") != 0)
                rax_3 = sub_140b294d0(&var_38, &arg_18, 0)
                
                if (&data_143de54e0 == rax_3)
                    goto label_1425e2334
                
                rbx_5 = *(rax_3 + 8)
                rdi_3 = *rax_3
                int32_t r8_17 = data_143de54ec
                data_143de54e8 = rbx_5
                
                if (rbx_5 == 0 && r8_17 == 0)
                    data_143de54ec = 0
                    goto label_1425e2334
                
                sub_1405a4c70(&data_143de54e0, rbx_5, r8_17)
                memcpy(data_143de54e0, rdi_3, rbx_5 * 2)
                goto label_1425e2334
            
            sub_140b1f640(arg4, u"Usage: SESSION <Command>")
            sub_140b1f640(arg4, &data_142d40450)
            sub_140b1f640(arg4, u"Command")
            sub_140b1f640(arg4, 
                AUTH <UserName> = Authorize a user to interact with this instance")
            sub_140b1f640(arg4, 
                DENY <UserName> = Unauthorize a user from interacting with this instance")
            sub_140b1f640(arg4, u"    DENYALL = Removes all authorized session users")
            sub_140b1f640(arg4, u"    SETNAME <Name> = Sets the name of this instance")
            sub_140b1f640(arg4,     SETOWNER <Owner> = Sets the name of the owner of this instance")
            sub_140b1f640(arg4, u"    STATUS = Displays the status of this application session")
        else
            void* rax_7 = sub_140af2bc0()
            var_38.o = data_143de54b0
            sub_140b291e0(&var_38, &var_48, 0)
            int16_t* const rdi_2 = &data_142d40450
            int64_t* r8_5 = &data_142d40450
            int32_t var_40
            
            if (var_40 != 0)
                r8_5 = var_48
            
            sub_140b1f700(arg4, u"Instance ID: %s", r8_5)
            int64_t* rcx_13 = var_48
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            GetCurrentProcessId()
            sub_140b65ba0()
            sub_140a2e390(&var_48, u"%s-%i", &data_143e18e20)
            int64_t* r8_6 = &data_142d40450
            
            if (var_40 != 0)
                r8_6 = var_48
            
            sub_140b1f700(arg4, u"Instance Name: %s", r8_6)
            int64_t* rcx_16 = var_48
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
            
            var_38.o = data_143de54c0
            sub_140b291e0(&var_38, &var_48, 0)
            int64_t* r8_7 = &data_142d40450
            
            if (var_40 != 0)
                r8_7 = var_48
            
            sub_140b1f700(arg4, u"Session ID: %s", r8_7)
            int64_t* rcx_19 = var_48
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            int32_t r14_1 = data_143de54d8
            int64_t* rbx_4 = nullptr
            int64_t r15_1 = data_143de54d0
            var_48 = nullptr
            int64_t* r15_2
            
            if (r14_1 != 0)
                sub_1405a4c70(&var_48, r14_1, 0)
                r15_2 = var_48
                memcpy(r15_2, r15_1, r14_1 * 2)
            else
                r15_2 = nullptr
            
            int64_t* r8_10 = &data_142d40450
            
            if (r14_1 != 0)
                r8_10 = r15_2
            
            sub_140b1f700(arg4, u"Session Name: %s", r8_10)
            
            if (r15_2 != 0)
                sub_140a74f90(r15_2)
            
            int32_t r14_2 = data_143de54e8
            int64_t r15_3 = data_143de54e0
            var_48 = nullptr
            
            if (r14_2 != 0)
                sub_1405a4c70(&var_48, r14_2, 0)
                rbx_4 = var_48
                memcpy(rbx_4, r15_3, r14_2 * 2)
            
            int64_t* r8_13 = &data_142d40450
            
            if (r14_2 != 0)
                r8_13 = rbx_4
            
            sub_140b1f700(arg4, u"Session Owner: %s", r8_13)
            
            if (rbx_4 != 0)
                sub_140a74f90(rbx_4)
            
            int64_t* rcx_28
            
            if (data_14399f928 == 0)
                rcx_28 = *(rax_7 + 0x18)
            else
                rcx_28 = *(rax_7 + 0x10)
            
            int16_t** rax_9 = sub_140ac6680(rcx_28)
            
            if (rax_9[1].d != 0)
                rdi_2 = *rax_9
            
            sub_140b1f700(arg4, u"Standalone: %s", rdi_2)
    else
        int32_t i_1 = data_143de5508
        int64_t* rbx_2 = data_143de5500
        
        if (i_1 != 0)
            int32_t i
            
            do
                int64_t rcx_9 = *rbx_2
                
                if (rcx_9 != 0)
                    sub_140a74f90(rcx_9)
                
                rbx_2 = &rbx_2[2]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        bool cond:2_1 = data_143de550c == 0
        data_143de5508 = 0
        
        if (not(cond:2_1))
            sub_14061cd70(&data_143de5500, 0)
else
    var_48 = sub_140b294d0(&var_38, &arg_18, 0)
    sub_140688b80(&data_143de5500, &var_48)
label_1425e2334:
    rcx_35 = var_38
label_1425e2338:
    
    if (rcx_35 != 0)
        sub_140a74f90(rcx_35)
rax_3.b = 1
return rax_3
