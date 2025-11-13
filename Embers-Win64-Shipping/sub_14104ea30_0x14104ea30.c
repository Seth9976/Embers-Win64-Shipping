// 函数: sub_14104ea30
// 地址: 0x14104ea30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_528
int64_t rax_1 = __security_cookie ^ &var_528
uint64_t r15 = zx.q(arg5)
int32_t r13 = arg4
uint64_t r14 = r15 * 0x28
uint64_t r12 = zx.q(arg3)
int32_t rbx = (&data_1439c85fc)[r15 * 0xa]
uint8_t rdx_1 = (arg6 u>> 4).b & 1
char var_4d8 = r15.b
int32_t var_4a8 = r12.d
int32_t var_4a0 = arg4
char var_4d0 = r15.b
int32_t var_468 = rbx
int32_t rax_2 = sub_140fe7330(rbx, rdx_1)
int32_t arg_30
int32_t rdi = arg_30
int32_t var_46c = rax_2
int16_t var_31c = 1
int64_t var_314 = 1
int64_t var_30c = 0
int64_t var_330 = 0
int32_t var_320 = r13
int128_t var_288 = 3.o
int16_t var_31a = rdi.w
uint128_t var_278 = r12.o
int128_t var_268 = rbx.o
uint64_t var_258 = var_30c
int64_t var_1a8[0x3]
memset(&var_1a8, 0, 0x150)
int32_t r10 = 0
int32_t rsi = arg8
var_1a0

if (rsi != 0)
    void* r11_1 = arg7
    int32_t rdi_1 = *(r14 + 0x1439c85e8)
    void* r9 = &var_1a0
    int32_t rax_3 = *(r14 + &data_1439c85ec)
    int32_t rbx_1 = (&data_1439c85f4)[r15 * 0xa]
    
    do
        r9 += 0x18
        char rcx_3 = r10.b
        r11_1 += 8
        uint32_t temp0_1 = divu.dp.d(0:(r12.d u>> rcx_3), rdi_1)
        uint32_t r8 = temp0_1
        
        if (temp0_1 u<= 1)
            r8 = 1
        
        uint32_t rcx_4 = divu.dp.d(0:(r13 u>> rcx_3), rax_3)
        *(r9 - 0x20) = *(r11_1 - 8)
        
        if (rcx_4 u<= 1)
            rcx_4 = 1
        
        r10 += 1
        *(r9 - 0x18) = zx.q(rbx_1 * r8)
        *(r9 - 0x10) = zx.q(rcx_4 * rbx_1 * r8)
    while (r10 u< rsi)
    
    r15 = zx.q(var_4d8)
    rdi = arg_30

void* rax_27 = arg1
int64_t r10_1 = *(rax_27 + 0x48)
int32_t r11_2 = *(rax_27 + 0x50)
int64_t var_4c0 = r10_1
int32_t var_4b0 = r11_2

if (rsi u< rdi)
    int32_t r9_1 = arg_30
    
    do
        uint64_t r8_1 = zx.q(r15.b) * 0x28
        uint32_t temp0_3 = divu.dp.d(0:(r12.d u>> rsi.b), *(r8_1 + 0x1439c85e8))
        uint32_t r14_2 = temp0_3
        
        if (temp0_3 u<= 1)
            r14_2 = 1
        
        uint32_t temp0_4 = divu.dp.d(0:(r13 u>> rsi.b), *(r8_1 + &data_1439c85ec))
        uint32_t rdi_2 = temp0_4
        
        if (temp0_4 u<= 1)
            rdi_2 = 1
        
        int32_t rdi_4 = rdi_2 * (&data_1439c85f4)[zx.q(r15.b) * 0xa] * r14_2
        
        if (rdi_4 u> r11_2)
            var_4b0 = rdi_4
            int64_t rax_21 = sub_140a82f30(zx.q(rdi_4), 0)
            var_4c0 = rax_21
            memset(rax_21, 0, zx.q(rdi_4))
            r9_1 = arg_30
            r11_2 = rdi_4
            r10_1 = var_4c0
            r12 = zx.q(var_4a8)
            r13 = var_4a0
            r15 = zx.q(var_4d0)
        
        uint64_t rax_22 = zx.q(rsi)
        rsi += 1
        uint64_t rdx_6 = rax_22 * 0x18
        (&var_1a8)[rax_22][0] = r10_1
        *(&var_1a0 + rdx_6) = zx.q((&data_1439c85f4)[zx.q(r15.b) * 0xa] * r14_2)
        var_198
        *(&var_198 + rdx_6) = zx.q(rdi_4)
    while (rsi u< r9_1)
    
    rax_27 = arg1

int64_t* rax_28 = *(rax_27 + 0x20)
void* rbx_2 = nullptr
char rcx_14 = (data_1439c7a34).b
int32_t var_470 = 0
void*** i_1 = nullptr
int32_t rsi_1 = 1 << rcx_14
void*** i_5 = nullptr
uint64_t r12_1 = *rax_28
int32_t* var_2d8 = &var_4a8
int32_t* var_2d0 = &var_4a0
int32_t* var_2c8 = &arg_30
char* var_2c0 = &var_4d0
int32_t* var_2b8 = &arg6
uint64_t var_300
int64_t* var_2b0 = &var_300
int128_t* var_2a8 = &var_288
int32_t* var_2a0 = &var_470
int32_t* var_298 = &var_46c
int32_t* var_290 = &var_468
var_300 = r12_1
void*** i_2 = nullptr
int32_t i_4 = rsi_1 - 1

if (rsi_1 != 1)
    uint64_t rflags_1
    int32_t temp0_5
    temp0_5, rflags_1 = _bit_scan_forward(i_4)
    int32_t rdi_5 = temp0_5
    int32_t var_2e0_1 = rdi_5
    int32_t i
    
    do
        void*** i_3 = sub_141040c30(&var_2d8, *(r12_1 + (zx.q(rdi_5) << 3) + 0x9d8))
        
        if (i_5 != 0)
            if (i_3 != 0)
                rbx_2 = &i_3[0xd]
            
            int64_t* r15_1 = i_5[0x24]
            i_5[0x24] = rbx_2
            
            if (rbx_2 != 0)
                (*(*rbx_2 + 8))(rbx_2)
            
            if (r15_1 != 0)
                (*(*r15_1 + 0x10))(r15_1)
            
            i_1 = i_2
            
            if (rbx_2 != 0)
                *(rbx_2 + 0xc0) = 0
            
            rbx_2 = nullptr
        else
            i_1 = i_3
            i_2 = i_3
        
        i_5 = i_3
        i = not.d(1 << rdi_5.b) & i_4
        i_4 = i
        
        if (i != 0)
            uint64_t rflags_2
            int32_t temp0_6
            temp0_6, rflags_2 = _bit_scan_forward(i)
            rdi_5 = temp0_6
            int32_t var_2f8_1 = rdi_5
        else
            rdi_5 = 0x20
    while (i != 0)
    
    if (i_1 != 0)
        int64_t* rsi_3 = &i_1[0xe][0xf8]
        int64_t rax_35 = sub_14104c420(i_1[0x18][4], 0, arg_30)
        int64_t var_418 = *rsi_3
        int32_t var_3f0_1 = 0
        int64_t var_3e8
        __builtin_memset(&var_3e8, 0, 0x2c)
        int32_t var_410_1 = 0
        int64_t var_408_1 = (zx.o(0)).q
        int64_t* var_3f8_1 = nullptr
        int16_t var_3b8_1 = 0xff00
        int64_t var_3a8 = *rsi_3
        int32_t var_3a0_1 = 0
        int64_t var_398_1 = (zx.o(0)).q
        int64_t* var_388_1 = nullptr
        int16_t var_348_1 = 0xff00
        int32_t var_380_1 = 0
        int64_t var_378
        __builtin_memset(&var_378, 0, 0x2c)
        char var_4d8_1
        
        if (rax_35 u<= 0x400000 || arg_30 u<= 1)
            r12_1.b = 0
            var_4d8_1 = 0
            sub_1410130c0(rsi_3, rax_35.d, 0x200, &var_418)
        else
            var_4d8_1 = 1
            r12_1 = 1
            int32_t rax_39 = sub_14104c420(i_1[0x18][4], 0, 1)
            int32_t rax_41 = sub_14104c420(i_1[0x18][4], 1, arg_30 - 1)
            sub_1410130c0(rsi_3, rax_39, 0x200, &var_418)
            sub_1410130c0(rsi_3, rax_41, 0x200, &var_3a8)
            *(var_398_1 + 8) += 1
        
        *(var_408_1 + 8) += 1
        
        do
            void* r13_1 = i_1[0xe]
            void* r14_4 = i_1[0x18]
            int64_t* rax_44 = sub_141027590(r13_1 + 0x50)
            void** var_490
            sub_141027760(*(r13_1 + 0x40), &var_490, rax_44)
            void* rcx_28 = **(r13_1 + 0x6d8)
            int64_t* var_488
            var_488[4] = rcx_28
            *(rcx_28 + 0x3b90) += 1
            int64_t var_508
            int64_t var_500
            int64_t* lpMem_3
            int32_t* var_4f0
            int64_t* var_4e8
            int64_t (* var_4e0)[0x3]
            int32_t var_4c8
            int64_t var_3c8
            
            if (r12_1.b == 0)
                int64_t var_438 = 0
                int64_t* rax_78 = *(var_408_1 + 0x20)
                int64_t* rax_79 = *(r14_4 + 0x20)
                int64_t* rax_81 = var_488[6]
                uint64_t rax_82 = zx.q(arg_30)
                var_4c8 = rax_82.d
                int64_t* lpMem_2 = HeapAlloc(GetProcessHeap(), HEAP_NONE, rax_82 * 0x2c)
                
                if (lpMem_2 != 0)
                    int64_t* rdi_13 = &lpMem_2[zx.q(rax_82.d) * 4]
                    void* rbx_8 = &rdi_13[rax_82]
                    void var_1e0
                    (*(*rax_79 + 0x50))(rax_79, &var_1e0)
                    int64_t r9_8 = *rax_79
                    int64_t* var_440
                    (*(r9_8 + 0x38))(rax_79, &data_142efcae0, &var_440, r9_8, var_508, var_500, 
                        lpMem_3, var_4f0, var_4e8, var_4e0, var_4d8_1)
                    int64_t* rcx_46 = var_440
                    (*(*rcx_46 + 0x130))(rcx_46, &var_1e0, 0, zx.q(var_4c8), var_3c8, lpMem_2, 
                        rbx_8, rdi_13, &var_438)
                    int64_t* rcx_47 = var_440
                    (*(*rcx_47 + 0x10))(rcx_47)
                    var_4e0 = &var_1a8
                    var_4e8 = rdi_13
                    var_4f0 = rbx_8
                    lpMem_3 = lpMem_2
                    var_500 = var_438
                    var_508.d = var_4c8
                    sub_14105c1f0(rax_81, rax_79, rax_78, 0, var_508.d, var_500, lpMem_3, var_4f0, 
                        var_4e8, var_4e0)
                    HeapFree(GetProcessHeap(), HEAP_NONE, lpMem_2)
            else
                int64_t var_478 = var_3c8
                int64_t var_428 = 0
                int64_t* rax_49 = *(var_408_1 + 0x20)
                var_4c8.q = *(r14_4 + 0x20)
                int64_t* rax_52 = var_488[6]
                int64_t* lpMem = HeapAlloc(GetProcessHeap(), HEAP_NONE, 0x2c)
                
                if (lpMem != 0)
                    int64_t* rcx_30 = var_4c8.q
                    void var_250
                    (*(*rcx_30 + 0x50))(rcx_30, &var_250)
                    int64_t* rax_55 = var_4c8.q
                    int64_t r9_5 = *rax_55
                    int64_t* var_430
                    (*(r9_5 + 0x38))(rax_55, &data_142efcae0, &var_430, r9_5, var_508, var_500, 
                        lpMem_3, var_4f0, var_4e8, var_4e0, var_4d8_1)
                    int64_t* rcx_32 = var_430
                    (*(*rcx_32 + 0x130))(rcx_32, &var_250, 0, 1, var_478, lpMem, &lpMem[5], 
                        &lpMem[4], &var_428)
                    int64_t* rcx_33 = var_430
                    (*(*rcx_33 + 0x10))(rcx_33)
                    var_4e0 = &var_1a8
                    var_4e8 = &lpMem[4]
                    var_4f0 = &lpMem[5]
                    lpMem_3 = lpMem
                    var_500 = var_428
                    var_508.d = 1
                    sub_14105c1f0(rax_52, var_4c8.q, rax_49, 0, var_508.d, var_500, lpMem_3, 
                        var_4f0, var_4e8, var_4e0)
                    HeapFree(GetProcessHeap(), HEAP_NONE, lpMem)
                
                var_478 = 0
                int64_t* rax_62 = *(var_398_1 + 0x20)
                int64_t* rax_63 = *(r14_4 + 0x20)
                int64_t* rax_65 = var_488[6]
                int32_t rax_67 = arg_30 - 1
                uint64_t rdi_8 = zx.q(rax_67)
                int64_t* lpMem_1 = HeapAlloc(GetProcessHeap(), HEAP_NONE, rdi_8 * 0x2c)
                
                if (lpMem_1 != 0)
                    int64_t* rdi_10 = &lpMem_1[rdi_8 * 4]
                    int32_t* rbx_6 = &rdi_10[rdi_8]
                    void var_218
                    (*(*rax_63 + 0x50))(rax_63, &var_218)
                    int64_t r9_6 = *rax_63
                    int64_t* var_420
                    (*(r9_6 + 0x38))(rax_63, &data_142efcae0, &var_420, r9_6, var_508, var_500, 
                        lpMem_3, var_4f0, var_4e8, var_4e0, var_4d8_1)
                    int64_t* rcx_39 = var_420
                    int64_t var_358
                    (*(*rcx_39 + 0x130))(rcx_39, &var_218, 1, zx.q(rax_67), var_358, lpMem_1, 
                        rbx_6, rdi_10, &var_478)
                    int64_t* rcx_40 = var_420
                    (*(*rcx_40 + 0x10))(rcx_40)
                    void var_190
                    var_4e0 = &var_190
                    var_4e8 = rdi_10
                    var_4f0 = rbx_6
                    lpMem_3 = lpMem_1
                    var_500 = var_478
                    var_508.d = rax_67
                    sub_14105c1f0(rax_65, rax_63, rax_62, 1, var_508.d, var_500, lpMem_3, var_4f0, 
                        var_4e8, var_4e0)
                    HeapFree(GetProcessHeap(), HEAP_NONE, lpMem_1)
            void* rdx_24 = *(r14_4 + 0x28)
            
            if (rdx_24 == 0)
                if (data_1439b4ad4 != 0 && *(r14_4 + 0x38) != 0)
                    sub_141026da0(var_488[0x23], r14_4 + 0x30)
            else if (data_1439b4ad4 != 0 && *(rdx_24 + 0x30) != 0)
                sub_141026da0(var_488[0x23], rdx_24 + 0x28)
            
            sub_1410179a0(var_488)
            sub_14101f770(*(r13_1 + 0x40), &var_490, 1)
            sub_141032cb0(r13_1 + 0x50, rax_44)
            void* rax_92 = i_1[0x24]
            i_1 = rax_92 - 0x68
            
            if (rax_92 == 0)
                i_1 = nullptr
            
            var_490 = &data_142efcd90
            
            if (var_488 != 0)
                int32_t rax_93 = *(var_488 + 0x14)
                *(var_488 + 0x14) -= 1
                
                if (rax_93 == 1 && var_488 != 0)
                    sub_14100eba0(var_488)
                    j_sub_140a74f90(var_488)
            
            r12_1 = zx.q(var_4d8_1)
        while (i_1 != 0)
        
        i_1 = i_2
        sub_14103af50(i_1, nullptr)
        int32_t rax_94 = *(var_408_1 + 8)
        *(var_408_1 + 8) -= 1
        
        if (rax_94 == 1 && var_408_1 != 0)
            (**var_408_1)(var_408_1, 1)
        
        int64_t rcx_60 = var_398_1
        
        if (rcx_60 != 0)
            int32_t rax_96 = *(rcx_60 + 8)
            *(rcx_60 + 8) -= 1
            
            if (rax_96 == 1 && rcx_60 != 0)
                (**rcx_60)(rcx_60, 1)
            
            rcx_60 = var_398_1
        
        if (var_3a0_1 == 1)
        label_14104f530:
            
            if (*(rcx_60 + 0xfe) == 0)
            label_14104f55e:
                int32_t rax_100 = *(rcx_60 + 8)
                *(rcx_60 + 8) -= 1
                
                if (rax_100 == 1 && rcx_60 != 0)
                    (**rcx_60)(rcx_60, 1)
            else
                sub_141049740(rcx_60)
        else if (var_3a0_1 == 2)
            int32_t var_350
            
            if (var_348_1:1.b != 1)
                sub_14101be70(var_388_1, &var_3a8)
            else
                sub_14101bf40(var_388_1, rcx_60, var_380_1, var_350)
        else if (var_3a0_1 s> 4)
            if (var_3a0_1 s<= 6)
                if (*(rcx_60 + 0xfe) == 0)
                    goto label_14104f55e
                
                int32_t rax_99 = 0
                
                if (0 == *(rcx_60 + 8))
                    *(rcx_60 + 8) = 0
                else
                    rax_99 = *(rcx_60 + 8)
                
                rcx_60 = var_398_1
                
                if (rax_99 != 1)
                    goto label_14104f55e
                
                sub_141049740(rcx_60)
            else if (var_3a0_1 == 7)
                goto label_14104f530
        
        int64_t rcx_61
        
        if (var_410_1 == 1)
        label_14104f59c:
            rcx_61 = var_408_1
            
            if (*(rcx_61 + 0xfe) == 0)
            label_14104f640:
                int32_t rsi_4 = *(rcx_61 + 8)
                *(rcx_61 + 8) -= 1
                
                if (rsi_4 == 1 && rcx_61 != 0)
                    (**rcx_61)(rcx_61, 1)
            else
                sub_141049740(rcx_61)
        else if (var_410_1 == 2)
            int32_t var_3c0
            
            if (var_3b8_1:1.b != 1)
                sub_14101be70(var_3f8_1, &var_418)
            else
                sub_14101bf40(var_3f8_1, var_408_1, var_3f0_1, var_3c0)
        else if (var_410_1 s> 4)
            if (var_410_1 s<= 6)
                rcx_61 = var_408_1
                
                if (*(rcx_61 + 0xfe) == 0)
                    goto label_14104f640
                
                int32_t rax_103 = 0
                
                if (0 == *(rcx_61 + 8))
                    *(rcx_61 + 8) = 0
                else
                    rax_103 = *(rcx_61 + 8)
                
                rcx_61 = var_408_1
                
                if (rax_103 != 1)
                    goto label_14104f640
                
                sub_141049740(rcx_61)
            else if (var_410_1 == 7)
                goto label_14104f59c
    
    r10_1 = var_4c0

if (var_4b0 != *(arg1 + 0x50))
    sub_140a74f90(r10_1)

*arg2 = i_1

if (i_1 != 0)
    i_1[1].d += 1

__security_check_cookie(rax_1 ^ &var_528)
return arg2
