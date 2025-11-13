// 函数: sub_14227ac70
// 地址: 0x14227ac70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x482) |= 2
*(arg1 + 0x4b2) |= 2
*(arg1 + 0x4a0) = arg1
*(arg1 + 0x4d0) = arg1
char* result = *(arg1 + 0x498)
uint8_t rcx = *(arg1 + 0x11c) u>> 2 & 1
char rdx

if (result == 0 || (*result & 1) == 0)
    rdx = 0
else
    rdx = 1

char* rdx_1

if (rcx == rdx)
    rdx_1 = *(arg1 + 0x4c8)
    
    if (rdx_1 == 0 || (*rdx_1 & 1) == 0)
        rdx_1.b = 0
    else
        rdx_1.b = 1

if (rcx != rdx || rcx != rdx_1.b)
    void* rdx_2 = *(arg1 + 0x30)
    
    if (rdx_2 != 0)
        if (rcx == 0)
            if (result != 0 && (*result & 1) != 0)
                sub_1423cb370(arg1 + 0x478)
            
            result = *(arg1 + 0x4c8)
            
            if (result != 0 && (*result & 1) != 0)
                sub_1423c7420(arg1 + 0x4a8, arg1, arg1 + 0x478)
                result = sub_1423cb370(arg1 + 0x4a8)
        else
            if (result == 0 || (*result & 1) == 0)
                *(arg1 + 0x480) = 1
                sub_1423c6c10(arg1 + 0x478, rdx_2)
            
            result = *(arg1 + 0x4c8)
            
            if (result == 0 || (*result & 1) == 0)
                void* rdx_3 = *(arg1 + 0x30)
                *(arg1 + 0x4b0) = 3
                sub_1423c6c10(arg1 + 0x4a8, rdx_3)
                result = sub_1423bc410(arg1 + 0x4a8, arg1, arg1 + 0x478)

void* rdi = *(arg1 + 0x1f8)

if (rdi != 0)
    sub_142265ea0()
    int128_t zmm0_1 = sub_142436950(arg1)
    TEB* gsbase
    
    if (data_143f52730
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f52730)
        
        if (data_143f52730 == 0xffffffff)
            int64_t* rcx_17 = data_143db18d0
            
            if (rcx_17 == 0)
                sub_140a53c40()
                rcx_17 = data_143db18d0
            
            int64_t r8_4
            r8_4.b = 1
            int64_t* rax_8 = (*(*rcx_17 + 0xb0))(rcx_17, u"p.MaxPhysicsDeltaTime", r8_4)
            
            if (rax_8 != 0)
                int64_t rdx_10 = *rax_8
                rax_8 = (*(rdx_10 + 0x60))(rax_8, rdx_10)
            
            data_143f52728 = rax_8
            _Init_thread_footer(&data_143f52730)
    
    int64_t* rax_2 = sub_142565030()
    
    if (rax_2[0x23] == 0)
        int64_t rdx_6 = *rax_2
        (*(rdx_6 + 0x390))(rax_2, rdx_6)
    
    int64_t* rax_3 = sub_142565030()
    
    if (rax_3[0x23] == 0)
        int64_t rdx_7 = *rax_3
        (*(rdx_7 + 0x390))(rax_3, rdx_7)
    
    int64_t* rax_4 = sub_142565030()
    result = rax_4[0x23]
    
    if (result == 0)
        int64_t rdx_8 = *rax_4
        (*(rdx_8 + 0x390))(rax_4, rdx_8)
        result = rax_4[0x23]
    
    int32_t zmm0_2 = *(result + 0xc0)
    int64_t* rcx_13 = *(rdi + 0x60)
    *(rdi + 0x74) = arg2.d
    *(rdi + 0x78) = zmm0_2
    
    if (rcx_13 != 0)
        result = (*(*rcx_13 + 0x30))(rcx_13)
        
        if (result != 0)
            int64_t r9_1 = *result
            (*(r9_1 + 0x358))(result, 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/Engine/Private/PhysicsEngine/PhysScene_PhysX."
            "cpp", 
                0x5b0, r9_1)
            int64_t r8_3 = *result
            int32_t var_30_1 = zmm0_1.d
            int64_t var_38 = 0
            (*(r8_3 + 0x210))(result, &var_38, r8_3)
            return (*(*result + 0x360))(result)

return result
