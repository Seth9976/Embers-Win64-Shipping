// 函数: sub_140d843e0
// 地址: 0x140d843e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
RAWINPUTDEVICELIST* pRawInputDeviceList = nullptr
RAWINPUTDEVICELIST* pRawInputDeviceList_1 = nullptr
uint32_t var_170 = 0
uint32_t puiNumDevices = 0
GetRawInputDeviceList(nullptr, &puiNumDevices, 0x10)
uint32_t puiNumDevices_1 = puiNumDevices
uint32_t result

if (puiNumDevices_1 != 0)
    if (puiNumDevices_1 s> 0)
        sub_1405a4f90(&pRawInputDeviceList_1)
        pRawInputDeviceList = pRawInputDeviceList_1
    
    GetRawInputDeviceList(pRawInputDeviceList, &puiNumDevices, 0x10)
    int32_t r15_1 = 0
    RAWINPUTDEVICELIST* pRawInputDeviceList_2 = pRawInputDeviceList
    void* r13_3 = &pRawInputDeviceList[sx.q(puiNumDevices_1)]
    bool cond:1_1
    
    if (pRawInputDeviceList != r13_3)
        do
            bool cond:0_1 = pRawInputDeviceList_2->dwType == 0
            uint32_t pcbSize = 0
            char* pData
            
            if (cond:0_1)
                if (GetRawInputDeviceInfoA(pRawInputDeviceList_2->hDevice, RIDI_DEVICENAME, 
                        nullptr, &pcbSize) != 0xffffffff)
                    int32_t rax_4 = pcbSize + 1
                    char* pData_1 = j_sub_140a82f30(zx.q(rax_4))
                    pData = pData_1
                    
                    if (pData_1 == 0)
                        pData = nullptr
                    else
                        memset(pData_1, 0, zx.q(rax_4))
                    
                    j_sub_140a74f90(0)
                    j_sub_140a74f90(0)
                    
                    if (GetRawInputDeviceInfoA(pRawInputDeviceList_2->hDevice, RIDI_DEVICENAME, 
                            pData, &pcbSize) != 0xffffffff)
                        pData[zx.q(pcbSize)] = 0
                        void var_158
                        sub_1405eb940(&var_158, pData)
                        int32_t rdx_4 = 0
                        int32_t rcx_7 = 0
                        pRawInputDeviceList_1 = nullptr
                        int64_t var_170_1 = 0
                        int16_t* var_50
                        
                        if (var_50 != 0 && *var_50 != 0)
                            int64_t rbx_1 = -1
                            
                            do
                                rbx_1 += 1
                            while (var_50[rbx_1] != 0)
                            
                            if (rbx_1.d + 1 s> 0)
                                sub_1405947f0(&pRawInputDeviceList_1, rbx_1.d + 1)
                                rcx_7 = var_170_1:4.d
                                rdx_4 = var_170_1.d
                            
                            int32_t rax_7 = rbx_1.d + 1 + rdx_4
                            var_170_1.d = rax_7
                            
                            if (rax_7 s> rcx_7)
                                sub_140594770(&pRawInputDeviceList_1)
                            
                            UnDecorator::getReferenceType(pRawInputDeviceList_1, var_50, 
                                (rbx_1.d + 1) * 2)
                        
                        int64_t var_58
                        
                        if (var_58 != 0)
                            sub_140a74f90(var_58)
                        
                        sub_140a306e0(&pRawInputDeviceList_1, &data_142d90624, &(*U"{}[\nt")[3], 0)
                        
                        if (sub_140a32ae0(&pRawInputDeviceList_1, \??\ROOT\RDP_MOU\", 1) == 0
                                && sub_140a32ae0(&pRawInputDeviceList_1, \\?\ROOT\RDP_MOU\", 1) == 0)
                            r15_1 += 1
                        
                        RAWINPUTDEVICELIST* pRawInputDeviceList_3 = pRawInputDeviceList_1
                        
                        if (pRawInputDeviceList_3 != 0)
                            sub_140a74f90(pRawInputDeviceList_3)
                else
                    pData = nullptr
            else
                pData = nullptr
            
            j_sub_140a74f90(pData)
            pRawInputDeviceList_2 = &pRawInputDeviceList_2[1]
        while (pRawInputDeviceList_2 != r13_3)
        
        cond:1_1 = r15_1 s> 0
    
    if (pRawInputDeviceList == r13_3 || r15_1 == 0)
        if (GetSystemMetrics(SM_REMOTESESSION) != 0)
            r15_1 = 1
        
        cond:1_1 = r15_1 s> 0
    
    result.b = cond:1_1
else
    result.b = 0

*(arg1 + 0x92) = result.b

if (pRawInputDeviceList != 0)
    result = sub_140a74f90(pRawInputDeviceList)

__security_check_cookie(rax_1 ^ &var_198)
return result
