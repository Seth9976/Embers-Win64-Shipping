// 函数: sub_1417cc2f0
// 地址: 0x1417cc2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = data_143ef85a8

if (rbx != 0)
    int64_t* rcx_1 = *rbx
    (*(*rcx_1 + 0x70))(rcx_1)
    DeleteCriticalSection(&rbx[0xb])
    rbx[0xa].d = 0
    int64_t rcx_3 = rbx[9]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    sub_140597460(&rbx[1])
    j_sub_140a74f90(rbx)
    data_143ef85a8 = 0

if (data_143ef8548 == 0)
    return 

int64_t* rcx_6 = data_143ef8538

if (rcx_6 != 0)
    (*(*rcx_6 + 0x20))(rcx_6)
    data_143ef8538 = 0

int64_t* rcx_7 = data_143ef8530

if (rcx_7 != 0)
    (*(*rcx_7 + 0x20))(rcx_7)
    data_143ef8530 = 0

int64_t* rcx_8 = data_143ef8520

if (rcx_8 != 0)
    int32_t rax_5 = (*(*rcx_8 + 0x98))(rcx_8)
    
    if (rax_5 != 0)
        int32_t rdi_1 = rax_5
        int64_t* rsi_1 = nullptr
        int64_t* var_28 = nullptr
        int32_t var_1c_1 = 0
        
        if (rax_5 s> 0)
            sub_1405a4d70(&var_28)
            rdi_1 = rax_5
            rsi_1 = var_28
        
        int64_t* rcx_10 = data_143ef8520
        (*(*rcx_10 + 0xa0))(rcx_10, rsi_1, zx.q(rax_5 << 3), 0)
        int64_t rbx_2 = 0
        int64_t* rdi_2 = rsi_1
        void* rcx_11 = &rsi_1[sx.q(rdi_1)]
        uint64_t rbp_4 = (rcx_11 - rsi_1 + 7) u>> 3
        
        if (rsi_1 u> rcx_11)
            rbp_4 = 0
        
        if (rbp_4 != 0)
            do
                int64_t* rcx_12 = *rdi_2
                
                if (rcx_12 != 0)
                    (*(*rcx_12 + 8))(rcx_12)
                
                rdi_2 = &rdi_2[1]
                rbx_2 += 1
            while (rbx_2 != rbp_4)
        
        if (rsi_1 != 0)
            sub_140a74f90(rsi_1)

void arg_8
int64_t* rax_9 = sub_140b58170(&arg_8, "PhysXVehicles", 1)
j_sub_140b3db50()

if (sub_140b3da90(&data_143de7d78, *rax_9) != 0)
    int64_t* rax_11 = sub_140b58170(&arg_8, "PhysXVehicles", 1)
    j_sub_140b3db50()
    sub_140b4a6b0(&data_143de7d78, *rax_11, 1)

int64_t* rax_13 = sub_140b3dbe0(*sub_140b58170(&arg_8, "PhysXCooking", 1))

if (rax_13 != 0)
    int64_t rdx_6 = *rax_13
    (*(rdx_6 + 0x48))(rax_13, rdx_6)

if (data_143ef8520 != 0)
    physx::shdfnd::Foundation::decRefCount()
    int64_t* rcx_19 = data_143ef8520
    
    if (rcx_19 != 0)
        (*(*rcx_19 + 8))(rcx_19)
        data_143ef8520 = 0

int64_t* rcx_20 = data_143ef8550

if (rcx_20 != 0)
    (*(*rcx_20 + 0x40))(rcx_20)
    data_143ef8550 = 0

int64_t* rcx_21 = data_143ef8548
(**rcx_21)(rcx_21)
HMODULE hLibModule = data_143ef8578
data_143ef8548 = 0
FreeLibrary(hLibModule)
FreeLibrary(data_143ef8570)
HMODULE hLibModule_1 = data_143ef8580

if (hLibModule_1 != 0)
    FreeLibrary(hLibModule_1)

FreeLibrary(data_143ef8568)
FreeLibrary(data_143ef8560)
FreeLibrary(data_143ef8590)
FreeLibrary(data_143ef8598)
FreeLibrary(data_143ef85a0)
