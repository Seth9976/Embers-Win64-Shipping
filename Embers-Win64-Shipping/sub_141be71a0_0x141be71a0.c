// 函数: sub_141be71a0
// 地址: 0x141be71a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3c8
int64_t rax_1 = __security_cookie ^ &var_3c8
*(arg1 + 0x68) = arg2
void* var_368
int64_t* result = sub_141bab3c0(arg1, &var_368)

if (var_368 != 0)
    int64_t* rcx = *(arg1 + 0x68)
    int128_t var_378
    int128_t* rdx_1 = &var_378
    int64_t* rbx_3
    
    if (rcx == 0)
        void* rcx_16 = var_368
        var_378 = zx.o(0)
        result = sub_140e25070(rcx_16, rdx_1)
        rbx_3 = var_378:8.q
    else
        char var_398
        char* var_388_1 = &var_398
        void** (* var_390)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4) = sub_141b970e0
        int128_t var_338_1 = zx.o(0)
        int64_t var_358_1 = 0
        char var_350_1 = 1
        int64_t var_348 = 0
        int32_t var_340_1 = 0
        char var_328_1 = 1
        int64_t var_320 = 0
        int32_t var_318_1 = 0
        var_398 = 0
        sub_141befea0(rcx, rdx_1, &var_390)
        void var_310
        int64_t* rax_2
        int128_t zmm6_1
        rax_2, zmm6_1 = sub_140e50320(&var_310)
        rax_2[0x53].b = 1
        *(rax_2 + 0x288) = zmm6_1
        sub_140692f90(&rax_2[0x54], &var_320)
        rax_2[0x56] = 0
        rax_2[0x57].b = 1
        sub_140692f90(&rax_2[0x58], &var_348)
        void*** rax_3 = sub_140e49080()
        var_390 = &rax_3[2]
        sub_140918950(&var_390, &rax_3[2])
        int64_t var_3a8_1 = 0x4f0
        void var_397
        void* var_380_1 = &var_397
        void* rax_4
        int128_t zmm1_2
        rax_4, zmm1_2 = sub_141b86160(rax_2, &var_378, sub_140e23ed0(&rax_3[2], "SToolTip"))
        sub_140e579a0(&var_390, &var_378, rax_4, zmm1_2)
        
        if (rax_3 != 0)
            rax_3[1].d -= 1
            
            if (rax_3[1].d == 1)
                (**rax_3)(rax_3)
                int32_t temp4_1 = *(rax_3 + 0xc)
                *(rax_3 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*rax_3)[1](rax_3, 1)
        
        sub_140e53770(&var_310)
        sub_140745b20(&var_320)
        sub_140745b20(&var_348)
        void* rax_7 = var_378.q
        
        if (rax_7 == 0)
            var_390 = nullptr
        else
            var_390 = rax_7 + 0x390
        
        rbx_3 = var_378:8.q
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        result = sub_140e25070(var_368, &var_390)
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                result = (**rbx_3)(rbx_3)
                int32_t temp7_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    result = (*(*rbx_3 + 8))(rbx_3, 1)
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            result = (**rbx_3)(rbx_3)
            int32_t temp5_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp5_1 == 1)
                result = (*(*rbx_3 + 8))(rbx_3, 1)

int64_t* var_360

if (var_360 != 0)
    var_360[1].d -= 1
    
    if (var_360[1].d == 1)
        result = (**var_360)(var_360)
        int32_t temp1_1 = *(var_360 + 0xc)
        *(var_360 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*var_360 + 8))(var_360, 1)

__security_check_cookie(rax_1 ^ &var_3c8)
return result
